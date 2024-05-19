class Solution {
public:
    int getpivot(vector<int>& arr, int n){
        int low = 0;
        int high = n-1;
        int mid = mid = low  +(high-low)/2;
        while(low<high){
            if(arr[mid]>=arr[0]){
                low = mid+1;
            }
            else{
                high = mid;
            }
            mid = low  +(high-low)/2;
        }
        return low;
    }
    int binarySearch(vector<int>& nums,int low, int pivot , int key){
        int high = pivot;
        int mid = low + (high - low)/2;
        while(low<=high){
            if(nums[mid] == key){
                return mid;
            }
            else if(key>nums[mid]){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
            mid = low  +(high-low)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getpivot(nums,n);
        if(target>=nums[pivot] && target<=nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }
        else{
            return binarySearch(nums,0,pivot,target);
        }
    }
};