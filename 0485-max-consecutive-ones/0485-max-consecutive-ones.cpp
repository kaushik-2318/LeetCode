class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxi = 0;
        for(int n: nums){
            if(n == 1) cnt ++;
            else cnt = 0;
            maxi = max(cnt, maxi);
        }
        return maxi;
    }
};