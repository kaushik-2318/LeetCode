class Solution {
public:
    // void rev(int i, int j, vector <int>& v){
    //     while(i<=j){
    //         int temp;
    //         temp = v[i];
    //         v[i] = v[j];
    //         v[j] = temp;
    //         i++;
    //         j--; 
    //     }
    // }
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // if(k>n){
        //     k = k%n;
        //     rev(0,n-k-1,nums);
        //     rev(n-k, n-1,nums);
        //     rev(0, n-1, nums);
        // }
        // else{
        //     rev(0,n-k-1,nums);
        //     rev(n-k, n-1,nums);
        //     rev(0, n-1, nums);
        // }
        // return;
        
        vector<int>temp(nums.size());
        for(int i = 0; i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
};