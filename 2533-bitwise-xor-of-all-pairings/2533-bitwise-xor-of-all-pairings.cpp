class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        //Memory Limit Exceeded
            // vector<long long> arr;
            // for(int i = 0; i < nums1.size(); i++){
            //     for(int j = 0; j < nums2.size(); j++){
            //         arr.push_back(nums1[i] ^ nums2[j]);
            //     }
            // }
            // int ans = 0;
            // for(long long a: arr){
            //     ans = a ^ ans;
            // }
        
        
        int xor1 = 0;
        if(nums2.size() % 2 != 0){
            for(int a: nums1){
                xor1 = a ^ xor1;
            }
        }

        int xor2 = 0;
        if(nums1.size() % 2 != 0){
            for(int a: nums2){
                xor2 = a ^ xor2;
            }
        }

        return xor1^xor2;
    }
};