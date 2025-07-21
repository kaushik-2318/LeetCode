class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        int n = s.length();
        res.push_back(s[0]);
        int freq = 1;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == res.back()){
                freq++;
                res.push_back(s[i]);
            }
            if(freq > 2){
                res.pop_back();
                freq--;
            }
            if(s[i] != res.back()){
                freq = 1;
                res.push_back(s[i]);
            }
        }
        return res;   
    }
};