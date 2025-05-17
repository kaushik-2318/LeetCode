class Solution {
public:
    int find(vector<int> &parent, int x)
    {
        return x == parent[x] ? x : parent[x] = find(parent, parent[x]);
    }

    void Union(vector<int> &parent, vector<int> &size, int a, int b)
    {
        a = find(parent, a);
        b = find(parent, b);
        if (a == b)
            return;
        if (size[a] >= size[b])
        {
            size[a] += size[b];
            parent[b] = a;
        }
        else
        {
            size[b] += size[a];
            parent[a] = b;
        }
    }
    long long countPairs(int n, vector<vector<int>>& edge) {
        vector<int> parent(n + 1);
        vector<int> size(n + 1, 1);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
            parent[i] = i;

        for (auto it : edge)
            Union(parent, size, it[0], it[1]);

        for (int i = 0; i < n; i++)
            mp[find(parent, i)]++;

        int remain = n;
        long long ans = 0;

        for (auto it : mp)
        {
            ans += (long long)it.second * (remain - it.second);
            remain -= it.second;
        }

        return ans;
    }
};