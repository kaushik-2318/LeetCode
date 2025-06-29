class Solution {
public:
int dp[1005][105][2];

int f(vector<int> &p, int i, int k, bool on)
{
    if (i == p.size())
        return 0;

    if (dp[i][k][on] != -1)
        return dp[i][k][on];

    int ans = INT_MIN;
    ans = f(p, i + 1, k, on);

    if (on)
    {
        ans = max(ans, p[i] + f(p, i + 1, k - 1, false));
    }
    else
    {
        if (k > 0)
        {
            ans = max(ans, f(p, i + 1, k, true) - p[i]);
        }
    }
    return dp[i][k][on] = ans;
}
    int maxProfit(int k, vector<int>& prices) {
    memset(dp, -1, sizeof(dp));
 
        return f(prices, 0, k, false);
    }
};