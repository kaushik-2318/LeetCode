class Solution {
public:
    int bitwiseComplement(int n) {
    int m=n;
    if (n == 0) return 1;
    int mask = 0;
    while (n != 0)
    {
        mask = mask << 1 | 1;
        n = n >> 1;
    }
    return (~m)&mask;
    }
};