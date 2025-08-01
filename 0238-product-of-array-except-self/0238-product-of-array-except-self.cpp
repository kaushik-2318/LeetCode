class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suff(nums.size());
        vector<int> ans(nums.size());

        pre[0] = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            pre[i] = nums[i - 1] * pre[i - 1];
        }

        suff[suff.size() - 1] = 1;

        for (int i = suff.size() - 2; i >= 0; i--)
        {
            suff[i] = suff[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = pre[i] * suff[i];
        }

        return ans;
    }
};