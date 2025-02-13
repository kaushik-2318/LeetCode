class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size() < 1) return 0;

        priority_queue<long long, vector<long long>, greater<long> > pq;

        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
        }

        int a = 0;
        
        while(pq.top() < k){
            a++;
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            pq.push(min(x,y)*2+max(x,y));
        }
        return a;
    }
};