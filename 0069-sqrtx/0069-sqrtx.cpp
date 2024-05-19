class Solution {
public:
    int mySqrt(int x) {
int low = 0;
        int high = x;
        while (low<=high){
            long long m = low + ((high-low)/2);
            if (m*m == x){
                return m;
            }
            else if (m*m>x) high = m-1;
            else if (m*m<x) low = m+1; 
        }
        return high;
    }
};