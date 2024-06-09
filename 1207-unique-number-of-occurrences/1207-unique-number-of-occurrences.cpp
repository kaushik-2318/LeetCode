class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();        
        vector<int>ans;
        
        int count=0;
        for(int i = 0; i<n; i = i+count){
            count = 1;
            for(int j =i+1; j<n ;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }       
        sort(ans.begin(), ans.end());
        
        
        
        for(int i = 0;i<ans.size()-1;i++){
            if(ans[i] == ans[i+1]){
                return false;
            }
        }
        return true;
    }
};