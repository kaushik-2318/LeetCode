class Solution {
public:
    vector<pair<int, int>> result;
    void dfs(vector<vector<int>>& grid, int r, int c, int newColor, int originalColor){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] != originalColor){
            return;
        }

        grid[r][c] = -newColor;
        dfs(grid, r+1, c, newColor,originalColor);
        dfs(grid, r-1, c, newColor,originalColor);
        dfs(grid, r, c+1, newColor,originalColor);
        dfs(grid, r, c-1, newColor,originalColor);

        if(!(r == 0 || c == 0 || r == grid.size()-1 || c == grid[0].size()-1 || grid[r+1][c] != -newColor || grid[r-1][c] != -newColor || grid[r][c-1] != -newColor || grid[r][c+1] != -newColor)){
            result.push_back({r,c});
        }
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int org = grid[row][col];
        if(org == color) return grid;
        dfs(grid, row, col, color, org);
        for(auto p:result){
            int i = p.first;
            int j = p.second;
            grid[i][j] = org;
        }
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] < 0) grid[i][j] *= -1;
            }
        }

        return grid;        
    }
};