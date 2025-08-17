class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;

        for (auto& arr : queries) {
            int l = arr[0];
            int r = arr[1];
            int k = arr[2];
            int v = arr[3];
            while (l <= r) {
                nums[l] = (1LL * nums[l] * v) % MOD;
                l += k;
            }
        }

        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res = nums[i] ^ res;
        }
        return res; 
    }
};
