class Solution {
public:
    string getBinary(int n) {
        string ans = "";
        for (int i=31; i>=0; i--) {
            if (n&(1<<i)) ans += '1';
            else ans += '0';
        }
        return ans;
    }

    vector<int> productQueries(int n, vector<vector<int>>& q) {
        string s = getBinary(n);
        vector<int> power;
        for(int i = s.length()-1; i >= 0; i--){
            int k = s[i] - '0';
            if(k == 1) power.push_back(pow(2, s.length() - i - 1));
        }

        vector<int> ans;

        for(int i = 0; i < q.size(); i++){
            int l = q[i][0];
            int r = q[i][1];
            long long mul = 1;
            for(int j = l; j <= r; j++){
                mul = (mul * power[j]) % 1000000007;
            }
            ans.push_back(mul);
        }
        return ans;
    }
};