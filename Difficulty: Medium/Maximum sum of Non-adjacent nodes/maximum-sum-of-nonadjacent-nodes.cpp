/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    unordered_map<Node*, int> dp;
    
    int solve(Node* root) {
        if (!root) return 0;

        if (dp.count(root)) return dp[root];

        int take = root->data;
        
        if (root->left) {
            take += solve(root->left->left);
            take += solve(root->left->right);
        }
        if (root->right) {
            take += solve(root->right->left);
            take += solve(root->right->right);
        }

        int notTake = solve(root->left) + solve(root->right);

        return dp[root] = max(take, notTake);
    }

    int getMaxSum(Node* root) {
        return solve(root);
    }
};