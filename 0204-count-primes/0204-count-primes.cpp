class Solution {
public:    
    int countPrimes(int n) {
        vector<bool> ans(n + 1, true);
        int count = 0;
        ans[0] = ans[1] = false;
        for (int i = 2; i < n; i++) {
            if (ans[i]) {
                count++;
                for (int j = 2 * i; j < n; j = i + j) {
                    ans[j] = 0;
                }
            }
        }
        return count;
    }
};