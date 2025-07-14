class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int> res;
        // int sum = 0;
        for(int i = 1; i < nums.size(); i++){
            // sum += n;
            // res.push_back(sum);
            nums[i] += nums[i-1];
        }
        return nums;
    }
};