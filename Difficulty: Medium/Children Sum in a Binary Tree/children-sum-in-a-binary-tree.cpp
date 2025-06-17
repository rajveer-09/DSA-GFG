/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int isSumProperty(Node *root) {
        if (!root) return 1;
        if (!root->left && !root->right) return 1;

        int sum = 0;
        if (root->left) sum += root->left->data;
        if (root->right) sum += root->right->data;

        if (root->data != sum) return 0;

        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};
