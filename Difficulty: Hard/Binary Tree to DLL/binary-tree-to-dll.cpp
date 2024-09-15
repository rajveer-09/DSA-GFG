//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node(val);
    return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input string after splitting by space
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

/* Function to print nodes in a given doubly linked list */
void printList(Node* node) {
    Node* prev = NULL;
    while (node != NULL) {
        cout << node->data << " ";
        prev = node;
        node = node->right;
    }
    cout << endl;
    while (prev != NULL) {
        cout << prev->data << " ";
        prev = prev->left;
    }
    cout << endl;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}


// } Driver Code Ends
/* Structure for tree and linked list

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

// This function should return head to the DLL
class Solution {
  public:
    pair<Node*,Node*> solve(Node*root){
        if(!root){
            return {nullptr,nullptr};
        }
        auto t1 = solve(root->left);
        auto t2 = solve(root->right);
        Node*lst = t1.first;
        Node*len = t1.second;
        Node*rst = t2.first;
        Node*ren = t2.second;
        if(len){
            len->right = root;
            root->left = len;
            root->right = rst;
            if(rst){
                rst->left = root;
                return {lst,ren};
            }
            return {lst,root};
        }
        else{
            root->left = len;
            root->right = rst;
            if(rst){
                rst->left = root;
                return {root,ren};
            }
            return {root,root};
        }
    }
    Node* bToDLL(Node* root) {
        return solve(root).first;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function */
int main() {
    int t;
    cin >> t;
    getchar();

    while (t--) {
        string inp;
        getline(cin, inp);
        Node* root = buildTree(inp);

        Solution ob;
        Node* head = ob.bToDLL(root);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends