class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {

        //Approch 1
            // vector<int> ans0;
            // ans0.push_back(0);

            // vector<int> ans1;
            // ans1.push_back(1);

            // int len = derived.size();

            // for(int i = 0; i < len-1; i++){
            //     ans0.push_back(derived[i]^ans0[i]);
            //     ans1.push_back(derived[i]^ans1[i]);
            // }

            // if((ans0[0]^ans0[len-1] == derived[len-1]) || (ans1[0]^ans1[len-1] == derived[len-1]))
            //     return true;
            
            // return false;

        //Approch 2

        int x = 0;
        for(auto a: derived){
            x = x ^ a;
        }

        return x == 0;
    }
};