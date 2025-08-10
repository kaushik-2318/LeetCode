class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int sr, int sc, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int er = sr + k - 1;
        int ec = sc + k - 1;

        int row = er; // will be updated inside loop

        for (int i = sr; i <= row; i++) {
            for (int j = sc; j <= ec; j++) {
                swap(grid[i][j], grid[row][j]);
            }
            --row;
        }

        return grid; 
    }
};
