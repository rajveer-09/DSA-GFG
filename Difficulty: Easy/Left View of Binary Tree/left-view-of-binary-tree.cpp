/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    void helper(Node* root, int lvl, vector<int>& ans){
        if(root == NULL) return;

        if(ans.size() < lvl){
            ans.push_back(root->data);
        }

        helper(root->left, lvl + 1, ans);
        helper(root->right, lvl + 1, ans);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        helper(root, 1, ans);
        
        return ans;
    }
};

