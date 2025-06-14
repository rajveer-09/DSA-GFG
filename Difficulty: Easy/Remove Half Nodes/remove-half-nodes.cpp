/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified tree after removing all the half nodes.
class Solution {
public:
    Node* RemoveHalfNodes(Node* root) {
        if (root == NULL) return NULL;
        
        root->left = RemoveHalfNodes(root->left);
        root->right = RemoveHalfNodes(root->right);
        
        // If it's a half node with only one child, return the non-null child
        if (root->left == NULL && root->right != NULL) return root->right;
        if (root->right == NULL && root->left != NULL) return root->left;
        
        return root;
    }
};



