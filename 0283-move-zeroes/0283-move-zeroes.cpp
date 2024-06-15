class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         int i = 0;
//         int j = 0;
//         while (i < nums.size() && j<nums.size())
//         {
//             if (nums[i] == 0 && nums[j] == 0)
//             {
//                 j++;
//             }

//             else if (nums[i] == 0 && nums[j] != 0)
//             {
//                 swap(nums[i], nums[j]);
//                 i++;
//                 j++;
//             }

//             else if (nums[i] != 0 && nums[j] != 0)
//             {
//                 j++;
//                 i++;
//             }
//             else if (nums[i] != 0 && nums[j] == 0)
//             {
//                 j++;
//                 i++;
//             }
//         }
        
        int i = 0;
        for(int j = 0; j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};