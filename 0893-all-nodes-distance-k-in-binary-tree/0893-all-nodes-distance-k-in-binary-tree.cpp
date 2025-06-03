/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool findTarget(TreeNode *root, TreeNode *target, stack<TreeNode *> &st)
{
    if (!root)
        return false;

    if (root == target)
    {
        return true;
    }

    st.push(root);
    if (findTarget(root->left, target, st) || findTarget(root->right, target, st))
    {
        return true;
    }
    st.pop(); // backtrack if not found in this branch
    return false;
}

void dfs(TreeNode *target, int k, vector<int> &ans, unordered_map<TreeNode *, bool> &visited, stack<TreeNode *> &st)
{
    if (target == NULL)
        return;
    if (visited[target])
        return;

    visited[target] = true;

    if (k == 0)
    {
        ans.push_back(target->val);
        return;
    }

    if (!st.empty())
    {
        TreeNode *parent = st.top();
        st.pop();
        dfs(parent, k - 1, ans, visited, st);
        st.push(parent); // restore for other branches
    }

    dfs(target->left, k - 1, ans, visited, st);
    dfs(target->right, k - 1, ans, visited, st);
}
vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
{
    vector<int> ans;
    unordered_map<TreeNode *, bool> visited;
    stack<TreeNode *> st;
    findTarget(root, target, st);
    visited.clear();
    dfs(target, k, ans, visited, st);
    return ans;
}
};