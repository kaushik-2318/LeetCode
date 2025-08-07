class Solution {
public:
    int first(vector<int>& arr, int t){
        int n = arr.size();
        int l = 0;
        int r = n-1;
        int ans = -1;
        while(l <= r){
            int mid = (l+r)/2;
            if(arr[mid] == t){
                ans = mid;
                r = mid - 1;
            }else if(arr[mid] < t){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans;
    }
    int last(vector<int> arr, int t){
        int n = arr.size();
        int l = 0;
        int r = n-1;
        int ans = -1;
        while(l <= r){
            int mid = (l+r)/2;
            if(arr[mid] == t){
                ans = mid;
                l = mid + 1;
            }
            else if(arr[mid] > t){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = first(nums, target);
        int b = last(nums, target);
        return {a,b};
    }
};