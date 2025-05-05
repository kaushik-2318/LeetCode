class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> count(100);
        int res = 0;
        for(auto nums: dominoes){
            int val = nums[0] > nums[1] ? nums[1]*10 + nums[0] : nums[0]*10 + nums[1];
            res += count[val];
            count[val]++;
        }
        return res;
    }
};