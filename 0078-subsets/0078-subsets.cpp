class Solution {
public:
    void subsets(vector<int> nums, vector<int> output, int index, vector< vector < int >>& ans){
        
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        //exclude
        subsets(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        subsets(nums, output, index+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        subsets(nums, output, index, ans);
        return ans;
    }
};