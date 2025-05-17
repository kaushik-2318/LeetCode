class Solution {
public:
    void dfs(vector<vector<int>> &edge, vector<bool> &visited, int node)
    {
        visited[node] = true;
        for (int i = 0; i < edge.size(); i++)
        {

            if (!visited[i] && (edge[node][0] == edge[i][0] || edge[node][1] == edge[i][1]))
            {
                dfs(edge, visited, i);
            }
        }
    }
    int removeStones(vector<vector<int>>& edge){
        int n = edge.size();
        vector<bool> visited(n, false);
        int cc = 0;
        for (int i = 0; i < n; i++){
            if (visited[i])
                continue;
            dfs(edge, visited, i);
            cc++;
        }
        return n - cc;
    }
};