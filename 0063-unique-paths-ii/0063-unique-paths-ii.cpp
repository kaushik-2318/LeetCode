class Solution {
public:
int helper(vector<vector<int>> &grid, int sr, int sc, int er, int ec, vector<vector<int>> &dp)
{

    if (sr == er && sc == ec)
        return 1;

    if (sr < 0 || sc < 0 || sr > er || sc > ec)
        return 0;

    if (grid[sr][sc] == 1)
        return 0;

    if (dp[sr][sc] != -1)
        return dp[sr][sc];

    int right = helper(grid, sr, sc + 1, er, ec, dp);
    int down = helper(grid, sr + 1, sc, er, ec, dp);

    dp[sr][sc] = right + down;
    return dp[sr][sc];
}

    int dp(vector<vector<int>> &grid, int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        if (grid[0][0] == 1 || grid[m - 1][n - 1] == 1)
            return 0;
        return helper(grid, 0, 0, m - 1, n - 1, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return dp(grid, m, n);
    }
};