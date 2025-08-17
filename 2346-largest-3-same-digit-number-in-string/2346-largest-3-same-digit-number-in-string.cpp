class Solution {
public:
    string largestGoodInteger(string num) {
        string maxi = "";
        for(int i = 0; i <= num.length() - 3; i++){
            string s = num.substr(i,3);
            if((s[0] == s[1] && s[1] == s[2]) && (s[0] - '0' > maxi[0] - '0'))
                maxi = s;          
        }   
        if(maxi != "-1") return maxi;
        return "";
    }
};