//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node* rev(Node* head)
{
    Node* curr = NULL;
    Node* prev = NULL;
    Node* nxt = head;
    
    while(nxt)
    {
        curr = nxt;
        nxt = nxt->next;
        curr->next = prev;
        prev = curr;
    }
    return curr;
}

struct Node * mergeResult(Node *node1,Node *node2)
{
    Node* p1 = rev(node1);
    
    Node* p2 = rev(node2);
    
    Node* dummy = newNode(-1);
    
    Node* p3 = dummy;
    
    while(p1 and p2)
    {
        if(p1->data>p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        
        else 
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
    }
    
    while(p1)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    
    while(p2)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    
    p3->next = NULL;
    
    return dummy->next;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends