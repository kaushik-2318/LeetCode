class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int a=0, b=0,c=0;
        // for(int i =0; i<nums.size(); i++){
        //     if(nums[i] == 0)
        //         a++;
        //     else if(nums[i] == 1)
        //         b++;
        //     else if(nums[i] == 2)
        //         c++;
        // }
        // for(int i = 0; i<nums.size(); i++){
        //     if(i<=a-1){
        //         nums[i] = 0;
        //     }
        //     else if(i>=a && i<=a+b-1){
        //         nums[i] = 1;
        //     }
        //     else{
        //         nums[i] = 2;
        //     }
        // }

        int low = 0, high = nums.size()-1, mid = 0;
        while(mid<=high){
            if(nums[mid] == 2){
                nums[mid] = nums[high];
                nums[high] = 2;
                high--;
            }
            else if(nums[mid] == 0){
                nums[mid] = nums[low];
                nums[low] = 0;
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
        }
    }
};