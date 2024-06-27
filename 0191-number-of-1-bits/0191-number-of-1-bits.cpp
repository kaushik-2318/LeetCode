class Solution {
public:
    int hammingWeight(int n) {
        // int arr[32];
        // int  i = 0;
        // int count = 0;
        // while(n>0){
        //     arr[i] = n%2;
        //     n=n/2;
        //     i++;
        // }
        // for(int i=0; i<32;i++){
        //     if(arr[i]==1){
        //         count++;
        //     }
        // }
        // return count;
        int count = 0;
        while(n>0){
            if(n&1)
                count++;
            n=n>>1;
        }
        return count;
    }
};