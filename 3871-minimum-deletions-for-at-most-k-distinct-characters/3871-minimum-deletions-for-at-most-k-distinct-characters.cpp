class Solution {
public:
int minDeletion(string s, int k) {
    unordered_map<char, int> um;
    for (char c : s) {
        um[c]++;
    }
    
    int size = um.size();
    int n = size - k;
    int sum = 0;

    vector<pair<char, int>> sortedChars(um.begin(), um.end());

    sort(sortedChars.begin(), sortedChars.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
        return a.second < b.second;
    });

    for (int i = 0; i < n; i++) {
        sum += sortedChars[i].second;
    }
    return sum;
}
};