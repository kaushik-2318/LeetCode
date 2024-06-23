class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row = arr.size();
        int col = arr[0].size();
        
        int s = 0;
        int e = row * col -1;
        int mid = s + (e-s)/2;
        
        while(s<=e){    
            if(arr[mid/col][mid%col] == target){
                return true;
            }
            else if(arr[mid/col][mid%col]>target){
                e = mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s + (e-s)/2;
        }
        return 0;
    }
};