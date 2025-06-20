/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
    int moves = 0;
    int dfs(Node* node) {
        if (!node) return 0;
        
        int left = dfs(node->left);
        int right = dfs(node->right);
        
        moves += abs(left) + abs(right);
        
        return node->data + left + right - 1; // excess coins to pass up
    }
public:
    int distributeCandy(Node* root) {
        moves = 0;
        dfs(root);
        return moves;
    }
};
