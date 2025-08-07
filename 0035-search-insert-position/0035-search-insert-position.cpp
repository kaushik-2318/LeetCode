class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        int ans;
        
        while(l <= r){
            int mid = (l+r)/2;
            if(arr[mid] >= t){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};