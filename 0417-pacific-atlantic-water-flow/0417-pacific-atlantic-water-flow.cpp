class Solution {
public:
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}}; //i,j -> i,j+1, i,j-1, i+1,j, i-1,j
    int rows;
    int cols;
    vector<vector<int>> h;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows = heights.size();
        cols = heights[0].size();
        h = heights;

        queue<pair<int, int>> pbfs;
        queue<pair<int, int>> abfs;

        //step of multisourse bfs
        for(int i = 0; i < rows; i++){
            pbfs.push({i,0});
            abfs.push({i, cols-1});
        }

        for(int j = 1; j < cols; j++){
            pbfs.push({0,j});
        }

        for(int j = 0; j < cols-1; j++){
            abfs.push({rows-1,j});
        }

        vector<vector<bool>>pacific = bfs(pbfs);
        vector<vector<bool>>alantic = bfs(abfs);

        vector<vector<int>>ans;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(pacific[i][j] && alantic[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
    }

    vector<vector<bool>> bfs(queue<pair<int, int>>&qu){
        vector<vector<bool>> visited(rows, vector<bool>(cols,false));
        while(!qu.empty()){
            auto cell = qu.front();
            qu.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j] = true;

            for(int d = 0; d < 4; d++){
                int newRow = i+dir[d][0];
                int newCol = j+dir[d][1];

                if(newRow < 0 || newCol < 0 || newRow >= rows || newCol >= cols) continue;

                if(visited[newRow][newCol]) continue;
                if(h[newRow][newCol] < h[i][j]) continue; //neighbour < 
                qu.push({newRow, newCol});
            }
        }
        return visited;
    }
};