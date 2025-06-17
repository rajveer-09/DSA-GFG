/*The node structure
struct Node {
int data;
Node * right, * left;
};*/

class Solution {
  public:
    Node* deleteNode(Node* root, int k) {
        if (!root) return nullptr;

        root->left = deleteNode(root->left, k);
        root->right = deleteNode(root->right, k);

        // If root's value is greater than or equal to k, delete this node
        if (root->data >= k) {
            // discard this node and all nodes >= k
            return root->left;  // Right subtree is already pruned
        }

        return root;
    }
};
