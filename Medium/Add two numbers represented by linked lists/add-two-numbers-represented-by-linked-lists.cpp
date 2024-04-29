//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverse(Node* root)
    {
        //base case
        if(root==NULL)
        return NULL;
        
        if(root->next==NULL)
        return root;
        
        //recursive calls
        Node* temp=reverse(root->next);
        root->next->next=root;
        root->next=NULL;
        return temp;
    }

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* i=reverse(first);
        Node* j=reverse(second);
        
        Node* head=NULL;
        Node* tail=NULL;
        int c=0;
        while(i and j)
        {
            int sum=c+(i->data)+(j->data);
            int first=sum/10;
            int last=sum%10;
            c=first;
            
            Node* newnode=new Node(last);
            if(head==NULL)
            {
                head=newnode;
                tail=head;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            i=i->next;
            j=j->next;
        }
        
        while(i)
        {
            int sum=c+i->data;
            int first=sum/10;
            int last=sum%10;
            c=first;
            
            Node* newnode=new Node(last);
            if(head==NULL)
            {
                head=newnode;
                tail=head;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            i=i->next;
        }
        
        while(j)
        {
            int sum=c+j->data;
            int first=sum/10;
            int last=sum%10;
            c=first;
            
            Node* newnode=new Node(last);
            if(head==NULL)
            {
                head=newnode;
                tail=head;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            j=j->next;
        }
        
        if(c)
        {
            Node* newnode=new Node(c);
            tail->next=newnode;
            tail=newnode;
        }
        
        head=reverse(head);
        while(head and head->data==0)
        head=head->next;
        
        if(!head)
        {
            Node* newnode=new Node(0);
            return newnode;
        }
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends