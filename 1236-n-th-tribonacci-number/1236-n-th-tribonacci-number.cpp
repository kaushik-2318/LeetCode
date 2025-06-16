class Solution {
public:
    vector<int> dp;
    int fabo(int n){
        if(n == 0) return 0; 
        if(n == 1) return 1; 
        if(n == 2) return 1;
        if(dp[n] != -1) return dp[n]; 
        return dp[n] = fabo(n-1) + fabo(n-2) + fabo(n-3);
    }
    int tribonacci(int n) {
        dp.clear();
        dp.resize(40,-1);
        return fabo(n);
    }
};