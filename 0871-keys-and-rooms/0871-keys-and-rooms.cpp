class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        queue<int> qu;
        qu.push(0);
        while(!qu.empty()){
            int curr = qu.front();
            qu.pop();
            visited.insert(curr);
            for(int n: rooms[curr]){
                if(visited.count(n) == 0){
                    qu.push(n);
                    visited.insert(n);
                }
            }
        }
    return visited.size() == rooms.size();
    }
};