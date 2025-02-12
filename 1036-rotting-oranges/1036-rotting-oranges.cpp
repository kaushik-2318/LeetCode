class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> qu;
        int fo = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1) fo++;
                if(grid[i][j] == 2) qu.push({i,j});
            }
        }
        qu.push({-1,-1});
        int min = 0;
        vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};

        while(!qu.empty()){
            auto cell = qu.front();
            qu.pop();
            if(cell.first == -1 && cell.second == -1){
                min++;
                if(!qu.empty()){
                    qu.push({-1,-1});
                }
                else{
                    break;
                }
            }
            else{
                int i = cell.first;
                int j = cell.second;
                for(int d = 0; d < 4; d++){
                    int nr = i + dir[d][0];
                    int nc = j + dir[d][1];
                    if(nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
                    if(grid[nr][nc] == 2 || grid[nr][nc] == 0) continue;

                    fo--;
                    grid[nr][nc] = 2;
                    qu.push({nr,nc});
                }
            }
        }
        return fo == 0 ? min-1 : -1;
    }
};