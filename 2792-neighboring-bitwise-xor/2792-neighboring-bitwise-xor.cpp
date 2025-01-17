class Solution {
public:
void print(vector<int> arr){
    for(int i = 0; i<arr.size();i++)
    cout<<arr[i]<<" ";
}
    bool doesValidArrayExist(vector<int>& derived) {
        vector<int> ans0;
        ans0.push_back(0);

        vector<int> ans1;
        ans1.push_back(1);

        int len = derived.size();

        for(int i = 0; i < len-1; i++){
            ans0.push_back(derived[i]^ans0[i]);
            ans1.push_back(derived[i]^ans1[i]);
        }

        // print(ans0);
        // cout<<endl;
        // print(ans1);
        if((ans0[0]^ans0[len-1] == derived[len-1]) || (ans1[0]^ans1[len-1] == derived[len-1]))
            return true;
        
        return false;
    }
};