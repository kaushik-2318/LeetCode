class Solution {
public:
    char isLowerCase(char a){
        if (a >= 65 && a <= 90) {
            a = a + 32;
            return a;
        }
        return a;
    }
    
    bool palindrome(string str){
        int s = 0;
        int e = str.size()-1;
        
        while(s<=e){
            if(str[s] != str[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    
    bool isPalindrome(string s) {
        for(int i = 0; i<s.length();i++){
            s[i] = isLowerCase(s[i]);
        }
        string temp = "";
        
        for(int i = 0; i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='B' || s[i]>='0' && s[i]<='9'){
                temp.push_back(s[i]);
            }
        }
        return palindrome(temp);        
    }
};