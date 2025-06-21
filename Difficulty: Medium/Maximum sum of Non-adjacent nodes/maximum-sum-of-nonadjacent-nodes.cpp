// Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    pair<int, int> dfs(Node* root) {
        if(!root) return {0, 0}; // {include, exclude}
        
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        
        int include = root->data + left.second + right.second;
        int exclude = max(left.first, left.second) + max(right.first, right.second);
        
        return {include, exclude};
    }

    int getMaxSum(Node* root) {
        auto ans = dfs(root);
        return max(ans.first, ans.second);
    }
};

