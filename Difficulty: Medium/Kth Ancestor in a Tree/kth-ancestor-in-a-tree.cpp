class Solution {
  public:
    bool findPath(Node* root, int target, vector<int>& path) {
        if (!root) return false;
        path.push_back(root->data);

        if (root->data == target) return true;

        if (findPath(root->left, target, path) || findPath(root->right, target, path)) {
            return true;
        }

        path.pop_back();
        return false;
    }

    int kthAncestor(Node *root, int k, int node) {
        vector<int> path;
        if (!findPath(root, node, path)) {
            return -1;
        }
        int idx = path.size() - k - 1;
        return (idx >= 0) ? path[idx] : -1;
    }
};
