class Solution {
public:
    vector<int> dp;

    int solve(vector<int>& nums, int idx){
        if(idx == 0) return nums[idx];
        
        if(idx < 0) return 0;

        if(dp[idx] != -1) return dp[idx];

        int a = nums[idx] + solve(nums, idx-2);
        int b = 0 + solve(nums, idx-1);
        return dp[idx] =  max(a,b);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        dp.clear();
        dp.resize(105, -1);
        vector<int> arr1(nums.begin(), nums.end()-1);
        int ans1 = solve(arr1, arr1.size()-1);
       
        dp.clear();
        dp.resize(105, -1);
        vector<int> arr2(nums.begin()+1, nums.end());
        int ans2 = solve(arr2, arr2.size()-1);
        return max(ans1, ans2);
    }
};