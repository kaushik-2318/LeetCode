class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> ans;
        while(head != NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        int sum = 0;
        for(int i = ans.size()-1; i >= 0; i--){
            if(ans[i] != 0)
                sum += pow(2,ans.size() - 1 - i);
            cout<<sum<<" ";
        }

        return sum;
    }
};