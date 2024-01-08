//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
     Node *reverse(Node *head)
    {
        Node*prev=NULL;
        Node*curr=head;
        Node*frw=NULL;
        while(curr!=NULL)
        {
            frw=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=frw;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        Node* reversed_head=reverse(head);
        
        Node*prev=reversed_head;
        Node*curr=reversed_head->next;
        while(curr!=NULL)
        {
            if(curr->data<prev->data)
            {
                prev->next=curr->next;
                curr=curr->next;
            }
            else
            {
                prev=prev->next;
                curr=curr->next;
            }
        }
        Node* result=reverse(reversed_head);
        return result;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends