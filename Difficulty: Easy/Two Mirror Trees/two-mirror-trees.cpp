/* Node structure
struct Node
{
    int data;
    Node* left, *right;
}; */

/* Given two trees, should return true if they are
   mirror of each other. */
class Solution {
  public:
  bool solve(Node* a, Node* b){
      if(!a && !b) return true;
      if(!a || !b) return false;
      if(a->data != b->data) return false;
      
      int x = solve(a->left, b->right);
      int y = solve(a->right, b->left);
      
      return x && y;
  }
    int areMirror(Node* a, Node* b) {
        // Your code here
        return solve(a, b);
        
    }
};