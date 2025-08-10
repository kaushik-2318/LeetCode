class Solution {
private:
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        for(int i = 0; i < 30; i++){
            int a = pow(2,i);
            string str = to_string(a);
            sort(str.begin(), str.end());
            if(str == s) return true;
        }
        return false;
    }
};