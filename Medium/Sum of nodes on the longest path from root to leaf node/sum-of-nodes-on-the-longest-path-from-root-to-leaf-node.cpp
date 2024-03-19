//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
int solve(Node* &root,int &node){
        if(root==NULL){
            return 0;
        }
        
        //leaf nodes 
        if(root->left==NULL&&root->right==NULL){
            node=node+1;
           // cout<<"hi";
            return root->data;
        }
      int nodeleft=0;
       int sumleft=0;
         sumleft=solve(root->left,nodeleft);
       
         
       int noderight=0;
       int sumright=0;
         sumright=solve(root->right,noderight);
      //UPDATE THE HEIGHT  
 if(nodeleft>noderight){
     node=nodeleft+1;
   // cout<<"ji";
     return sumleft+root->data;
 }else {
     if(nodeleft==noderight){
         if(sumleft>sumright){
             // cout<<"ji";
             node=nodeleft+1;
             return sumleft+root->data;
         }
     }     
     
 }
 
         node=noderight+1;
         return sumright+root->data;
     
     
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
int sumleft=0;
//int sumright=0;
int node=0;
sumleft=solve(root,node);
//sumright=solve(root->right,node);
return sumleft;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int res = obj.sumOfLongRootToLeafPath(root);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends