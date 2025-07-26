class Solution {
public:
    int floor(vector<int>& arr, int target){
        int l = 0;
        int h = arr.size()-1;
        int ans = -1;
        while(l<=h){
            int mid = (l + h)/2;
            if(arr[mid] == target){
                ans = mid;
                h = mid-1;
            }
            else if(arr[mid] < target){
                l = mid +1;
            }
            else{
                h = mid-1;
            }
        }
        return ans;
    }

    int ceil(vector<int>& arr, int target){
    int l = 0;
    int h = arr.size()-1;
    int ans = -1;
        while(l<=h){
            int mid = (l + h)/2;
            if(arr[mid] == target){
                ans = mid;
                l = mid+1;
            }
            else if(arr[mid] < target){
                l = mid +1;
            }
            else{
                h = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1};
        int l = floor(nums, target);
        int h = ceil(nums, target);
        return {l,h};

    }
};