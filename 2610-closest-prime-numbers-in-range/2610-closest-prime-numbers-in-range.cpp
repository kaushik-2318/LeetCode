class Solution {
public:
    vector<int>prime;

    bool primeNumber(int n){
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        for(int i = left; i <= right; i++){
            if(primeNumber(i) && i != 1){
                prime.push_back(i);
            }
        }


        int min = INT_MAX;
        int a=-1,b=-1;

        if(prime.size()>0){
            for(int i = 0; i < prime.size()-1; i++){
                if(prime[i+1] - prime[i] < min){
                    a=prime[i];
                    b=prime[i+1];
                    min = b-a;
                }
            }
        }
        return vector<int>{a,b};
    }
};