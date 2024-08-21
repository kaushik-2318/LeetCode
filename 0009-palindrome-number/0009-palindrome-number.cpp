class Solution {
public:
int reverse(int n){
    long long rev = 0;
    while(n>0){
        int a = n%10;
        rev = rev*10+a;
        n=n/10;
    }
    return rev;
}
bool isPalindrome(int n)
{
    if(n == reverse(n)){
        return true;
    }
    else{
        return false;
    }
}
};