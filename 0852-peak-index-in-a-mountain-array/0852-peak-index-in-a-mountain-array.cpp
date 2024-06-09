class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();

    //Method 1
        int low = 1;
        int high = n-2;
        int idx = -1;
        while (low<=high){
            int mid = low + ((high-low)/2);
            if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;
            }
            else if (arr[mid] > arr[mid+1]){
                high = mid-1;  
            }
            else{
                low = mid+1;
            }
        }    

    //Method 2
        // int low = 0;
        // int high = n-1;
        // int idx = -1;
        // while (low<=high){
        //     int mid = low + ((high-low)/2);
        //     if (arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1]){
        //         high = mid;
        //     }
        //     else if (arr[mid] < arr[mid+1] && arr[mid] > arr[mid-1]){
        //         low = mid;  
        //     }
        //     else if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
        //         idx = mid;
        //         break;
        //     }
        // }

    //Method 3
        // for (int i = 0; i < n; i++){
        //     if (arr[i] > arr[i+1] && arr[i] > arr[i-1]){
        //         idx = i;
        //     }
        // }
    // return idx;
    return -1;
    }
};