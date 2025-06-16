class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
if(nums.size() == 0){
    return 0;
}
        int i = 0, j = nums.size()-1;

    while (i <= j) {
        if (nums[i] == val) {
            nums[i] = nums[j];
            j--;
        } else {
            i++;
        }
    }
        nums.erase(nums.begin() + j + 1, nums.end());
        return nums.size();
    }
};