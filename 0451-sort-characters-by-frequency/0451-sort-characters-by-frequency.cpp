class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> um;
        for (char c : s) {
            um[c]++;
        }
        vector<pair<char, int>> vec(um.begin(), um.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        string K = "";
        for(auto d : vec){
            cout<<d.first<<" "<<d.second<<'\n';
            // for(int i = 0; i < d.second; i++){
                // K = K + d.first;
            // }
            K.append(d.second, d.first);
        }
        return K;
    }
};