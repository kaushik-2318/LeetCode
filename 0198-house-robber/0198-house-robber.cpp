class Solution {
public:
    vector<int> dp;

    int helper_dp(vector<int> &v, int idx)
    {
        if (idx == 0)
            return v[idx];

        if (idx <  0)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        return dp[idx] = max(v[idx] + helper_dp(v, idx - 2), 0 + helper_dp(v, idx - 1));
    }
    int rob(vector<int>& v) {
        dp.clear();
        dp.resize(105, -1);
        return helper_dp(v, v.size()-1);
    }
};