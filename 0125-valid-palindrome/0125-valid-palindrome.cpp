class Solution {
public:
    bool solve(string str) {
  int s = 0;
  int e = str.size() - 1;

  while (s <= e) {
    if (str[s] != str[e]) {
      return false;
    } else {
      s++;
      e--;
    }
  }
  return true;
}
    bool isPalindrome(string s) {
  for (auto &x : s) {
    x = tolower(x);
  }
  string str;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'B' ||
        s[i] >= '0' && s[i] <= '9') {
      str.push_back(s[i]);
    }
  }
  return solve(str);
    }
};