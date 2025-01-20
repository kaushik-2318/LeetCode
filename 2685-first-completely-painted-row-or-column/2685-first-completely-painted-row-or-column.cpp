class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {        
        int row = mat.size();
        int col = mat[0].size();

        map<int, int> rowele, colele, rowcount, colcount;


        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                rowele[mat[i][j]] = i;
                colele[mat[i][j]] = j;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            rowcount[rowele[arr[i]]]++;
            colcount[colele[arr[i]]]++;

            if(rowcount[rowele[arr[i]]] == col || colcount[colele[arr[i]]] == row){
                return i;
            }
        }
        return -1;
    }
};