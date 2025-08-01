class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> mat;
        for(int i = 0 ; i < n; i++){
            vector<int> arr;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    arr.push_back(1);
                }
                else{
                    arr.push_back(mat[i - 1][j - 1] + mat[i - 1][j]);
                }
             }
            mat.push_back(arr);
        }
        return mat;
    }
};