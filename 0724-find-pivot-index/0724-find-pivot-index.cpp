class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum=0, lsum = 0;
        for(int i = 0; i < nums.size(); i++){
            rsum = rsum  + nums[i];
        }
        
        for(int i = 0; i<nums.size(); i++){
            rsum = rsum - nums[i];
            if(lsum == rsum){
                return i;
            }
            lsum = lsum + nums[i];
        }
        return -1;
            
            
//         int l = 0;
//         int h = nums.size() - 1;
//         int m = l + (h-l)/2;
//         while(l<=h){
//             int lsum = 0, rsum=0;
//             for(int i = 0; i < m; i++){
//                 lsum = lsum + nums[i];
//             }
//              for(int i = m+1; i < nums.size(); i++){
//                 rsum = rsum + nums[i];
//             }
//             if(lsum == rsum){
//                 return m;
//             }
//             else{
//                 if(rsum>lsum){
//                     m++;
//                 }
//                 else if(rsum<lsum){
//                     m--;
//                 }
//             }
//         }
//         return -1;
    }
};