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
    // Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root, int n1, int n2) {

        if (root == nullptr || root->data == n1 || root->data == n2)
            return root;
        

        Node* leftLCA = lca(root->left, n1, n2);
        Node* rightLCA = lca(root->right, n1, n2);

        if (leftLCA && rightLCA) return root;


        return leftLCA ? leftLCA : rightLCA;
    }
};
