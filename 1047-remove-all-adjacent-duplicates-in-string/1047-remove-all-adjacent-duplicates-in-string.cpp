class Solution {
public:
    string removeDuplicates(string str) {        
      int i = 0;
      int j = 1;
      while (i < str.length()) {
        if (str[i] == str[j]) {
          str.erase(i, j-i+1);
          i = 0;
          j = 1;
        } else {
          i++;
          j++;
        }
      }
      return str;
    }
};