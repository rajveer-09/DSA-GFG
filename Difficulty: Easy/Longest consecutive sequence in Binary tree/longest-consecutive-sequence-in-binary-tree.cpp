/*
struct Node
{
    int data;
    Node *left, *right;
};
*/
class Solution {
  public:
    int maxLen = 0;
    
    void dfs(Node* node, int parentVal, int currLen) {
        if (!node) return;

        if (node->data == parentVal + 1) {
            currLen += 1;
        }
        else{
            currLen = 1;
        }

        maxLen = max(maxLen, currLen);

        dfs(node->left, node->data, currLen);
        dfs(node->right, node->data, currLen);
    }

    int longestConsecutive(Node* root) {
        if (!root) return 0;
        
        maxLen = 0;
        dfs(root, root->data - 1, 0);
        
        if(maxLen <= 1) maxLen = -1;
        
        return maxLen;
    }
};
