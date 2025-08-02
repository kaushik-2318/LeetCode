class Solution {
public:
    int solve(vector<vector<int>>& t, int sr, int sc, vector<vector<int>>& dp){
        if(dp[sr][sc] != INT_MAX) return dp[sr][sc];

        if(sr == t.size()-1) return t[sr][sc];

        int rig = solve(t, sr+1, sc, dp);
        int down = solve(t, sr+1, sc+1, dp);

        return dp[sr][sc] = min(rig, down) + t[sr][sc];
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), INT_MAX));
        return solve(triangle, 0, 0 ,dp);
    }
};