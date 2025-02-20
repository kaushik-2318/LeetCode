class Solution {
public:
int btod(string s, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
            sum += pow(2, n - 1 - i);
    }
    return sum;
}

string dtob(int n, int length) {
    return bitset<64>(n).to_string().substr(64 - length);
}

string findDifferentBinaryString(vector<string>& nums) {
    int n = nums[0].length();
    string min, max;
    
    for (int i = 0; i < n; i++) {
        min.push_back('0');
        max.push_back('1');
    }

    int mini = btod(min, n);
    int maxi = btod(max, n);

    for (int i = mini; i <= maxi; i++) {
        string binaryStr = dtob(i, n);
        if (find(nums.begin(), nums.end(), binaryStr) == nums.end()) {
            return binaryStr;
        }
    }

    return "";
}
};