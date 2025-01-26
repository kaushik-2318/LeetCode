class Solution {
public:
    void dfs(vector<vector<int>>& image, int currRow, int currCol, int iniColor, int newColor){
   
        int row = image.size();
        int col = image[0].size();
        
        if(currRow < 0 || currCol < 0 || currRow >= row || currCol >= col)
            return;
        
        if(image[currRow][currCol] != iniColor)
            return;
        
        image[currRow][currCol] = newColor;

        dfs(image, currRow+1, currCol, iniColor, newColor);
        dfs(image, currRow, currCol+1, iniColor, newColor);
        dfs(image, currRow-1, currCol, iniColor, newColor);
        dfs(image, currRow, currCol-1, iniColor, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc]) return image; //we don't want to change color
        dfs(image, sr, sc, image[sr][sc],color);
        return image;
    }
};