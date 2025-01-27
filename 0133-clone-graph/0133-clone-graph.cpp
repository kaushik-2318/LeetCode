/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    vector<Node *> nodeRegister;
    void dfs(Node * actual, Node * clone){
        for(auto neighbors: actual->neighbors){
            if(not nodeRegister[neighbors->val]){
                Node * newNode = new Node(neighbors->val);
                nodeRegister[newNode->val] = newNode;
                clone->neighbors.push_back(newNode);
                dfs(neighbors, newNode);
            }else{
                clone->neighbors.push_back(nodeRegister[neighbors->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL){
            return NULL;
        }
        Node * clone = new Node(node->val);
        nodeRegister.resize(110, NULL);
        nodeRegister[clone->val] = clone;
        dfs(node, clone);
        return clone;
    }
};