class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int i = 0, j = 0, prod = 1, cnt = 0, n = nums.size();
        while(j < n){
            prod *= nums[j];
            while(prod >= k){
                cnt += j-i;
                prod /= nums[i];
                i++;
            }         
            j++;
        }
         while(i < n){
            cnt += j-i;
            prod /= nums[i];
            i++;
        }         
        return cnt;

    }
};