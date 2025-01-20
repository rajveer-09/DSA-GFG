//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node* rev(Node* h){
        Node* n=h;
        Node* c=h;
        Node* p=NULL;
        
        while(n){
            n=n->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
  
  
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(k==1)
            return head;
        
        Node* ans=NULL;
        Node* manageLast=NULL;
        
        Node* s=NULL;
        Node* e=NULL;

        while(head){
            s=head;
            e=head;
            for(int i=0;i<k-1;i++){
                if(e->next)
                    e=e->next;
                else
                    break;
            }
            
            head=e->next;
            e->next=NULL;
            
            //..........
            //..........
            
            Node* z=rev(s);
            
            if(ans==NULL){
                ans=e;
                manageLast=s;
            }
            else{
                manageLast->next=e;
                manageLast=s;
                
            }
                
                
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends