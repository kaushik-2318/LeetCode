class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int res = 0;
        // for(int i = 0 ; i < nums.size(); i++){
        //     res = nums[i] ^ i;
        // }
        // return res-1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i) return i;
        }
        
            return nums.size();
        
    }
};