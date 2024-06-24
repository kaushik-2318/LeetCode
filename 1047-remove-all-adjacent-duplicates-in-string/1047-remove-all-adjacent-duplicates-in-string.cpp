class Solution {
public:
    string removeDuplicates(string s) {        
      // int i = 0;
      // int j = 1;
      // while (i < str.length()) {
      //   if (str[i] == str[j]) {
      //     str.erase(i, j-i+1);
      //     i = 0;
      //     j = 1;
      //   } else {
      //     i++;
      //     j++;
      //   }
      // }
      // return str;
          string ans = "";
  for (int i = 0; i < s.size(); i++) {
    if (ans.empty())
      ans.push_back(s[i]);
    else {
      if (ans.back() == s[i]) {
        ans.pop_back();
      } else
        ans.push_back(s[i]);
    }
  }
  return ans;
    }
};