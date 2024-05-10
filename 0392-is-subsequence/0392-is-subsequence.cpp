class Solution {
public:
    bool isSubsequence(string s, string t) {
    int a = s.length();
    int b = t.length();
    int i, j;
    for (i = 0, j = 0; i < a && j < b;){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    if (i==a)
    {
        return true;
    }
    else{
        return false;
    }
    }
};