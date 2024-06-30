//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Node{
    public:
    Node *link[2];
    bool containBit(int bit){
        return (link[bit] != NULL);
    }
    
    void put(int bit,Node* node){
        link[bit]=node;
    }
    Node* get(int bit){
        return link[bit];
    }
};
class Trie
{
    private:
    Node *root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(int num)
    {
        Node *node=root;
        for(int i=31;i>=0;i--)
        {
            int bit= (num>>i) & 1;
            if(!node->containBit(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }
    int getMax(int num){
        Node *node=root;
        int maxNum=0;
        for(int i=31;i>=0;i--){
            int bit=(num>>i) & 1;
            if(node->containBit(1-bit)){
                maxNum= maxNum |  (1<<i);
                node=node->get(1-bit);
            }
            else node=node->get(bit);
        }
        return maxNum;
    }
};

class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        Trie t;
        for(int i=0;i<n;i++){
            t.insert(arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,t.getMax(arr[i]));
        }
        return ans;
    }
    
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}



// } Driver Code Ends