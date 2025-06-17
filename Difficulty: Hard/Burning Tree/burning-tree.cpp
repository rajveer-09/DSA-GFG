/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    unordered_map<Node*, Node*> pp;
    int ans = -1;
    Node* start;
    void preOrdere(Node* root, int strt){
        if(!root) return;
    
        if(root->data == strt){
            start = root;
        }
    
        if(root->left){
            pp[root->left] = root;
        }
        if(root->right){
            pp[root->right] = root;
        }
    
        preOrdere(root->left, strt);
        preOrdere(root->right, strt);
    }
    void bfs(Node* start){
        if(!start) return;
    
        queue<Node*> q;
        unordered_map<Node*, bool> vis;
    
        q.push(start);
        vis[start] = true;
    
        while(!q.empty()){
            int n = q.size();
    
            for(int i = 0; i < n; i++){
                Node* node = q.front();
                q.pop();
    
                if(node->left && !vis.count(node->left)){
                    q.push(node->left);
                    vis[node->left] =true;
                } 
                if(node->right && !vis.count(node->right)) {
                    q.push(node->right);
                    vis[node->right] =true;
                }
                if(pp.count(node) && !vis.count(pp[node])) {
                    q.push(pp[node]);
                    vis[pp[node]] =true;
                }
            }
    
            ans++;
        }
    }
    int minTime(Node* root, int strt) {
        // code here
        pp.clear();

        preOrdere(root, strt);
        
        bfs(start);

        return ans;
        
    }
};