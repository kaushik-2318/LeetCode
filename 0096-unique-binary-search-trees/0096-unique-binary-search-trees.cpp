class Solution {
public:
vector<int> dp_arr;

int dp(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (dp_arr[n] != -1) return dp_arr[n];

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += dp(i - 1) * dp(n - i);
    }

    return dp_arr[n] = sum;
}
    int numTrees(int n) {
        dp_arr.clear();
        dp_arr.resize(30,-1);
        return dp(n);
    }
};