class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0;
        int h = n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(arr[mid] == target) return true;

                    if (arr[l] == arr[mid] && arr[mid] == arr[h]) {
            l = l + 1;
            h = h - 1;
            continue;
        }

            if(arr[l] <= arr[mid]){
                if(arr[l] <= target && target <= arr[mid]){
                    h = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                if(arr[mid] <= target && target <= arr[h]){
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
        }
        return false;
    }
};