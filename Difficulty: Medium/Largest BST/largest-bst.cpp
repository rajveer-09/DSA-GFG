class Solution {
public:
    int maxBSTSize = 0;

    int postOrder(Node* root, int& minVal, int& maxVal, bool& isBST) {
        if (!root) {
            minVal = INT_MAX;
            maxVal = INT_MIN;
            isBST = true;
            return 0;
        }

        int leftMin, rightMin, leftMax, rightMax;
        bool leftIsBST, rightIsBST;

        int leftSize = postOrder(root->left, leftMin, leftMax, leftIsBST);
        int rightSize = postOrder(root->right, rightMin, rightMax, rightIsBST);

        if (leftIsBST && rightIsBST && root->data > leftMax && root->data < rightMin) {
            minVal = min(root->data, leftMin);
            maxVal = max(root->data, rightMax);
            isBST = true;
            int currSize = 1 + leftSize + rightSize;
            maxBSTSize = max(maxBSTSize, currSize);
            return currSize;
        }

        isBST = false;
        return 0;  // current subtree is not BST
    }

    int largestBst(Node* root) {
        int minVal, maxVal;
        bool isBST;
        postOrder(root, minVal, maxVal, isBST);
        return maxBSTSize;
    }
};
