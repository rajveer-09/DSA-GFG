//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next, *prev;

    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


// } Driver Code Ends

/* Structure of the node of the list is as
struct Node
{
    int data;
    struct Node *next, *prev;
    Node (int x){
        data = x;
        next = prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    void merge(int l,int m,int r,vector<int> &v){
        int a[m-l+1];
        int b[r-m];
        
        for(int i=l;i<=m;i++){
            a[i-l]=v[i];
        }
        
        for(int j=m+1;j<=r;j++){
            b[j-m-1]=v[j];
        }
        
        int k=l;
        int i=0,j=0;
        
        int n1=m-l+1;
        int n2=r-m;
        
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                v[k]=a[i];
                i++;
                k++;
            }
            else{
                v[k]=b[j];
                j++;
                k++;
            }
            
        }
        
        while(i<n1){
            v[k]=a[i];
            i++;
            k++;
        }
        
        while(j<n2){
            v[k]=b[j];
            j++;
            k++;
        }
        
        return;
        
    }
    
    
    void ms(int l,int r,vector<int> &v){
        if(l<r){
            int m=(l+r)/2;
            ms(l,m,v);
            ms(m+1,r,v);
            merge(l,m,r,v);
        }
        return;
    }
    
    
    struct Node* sortDoubly(struct Node *head) {
        // Your code here
        Node* p=head;
        vector<int> v;
        while(p!=NULL){
            v.push_back(p->data);
            p=p->next;
        }
        // sort(v.begin(),v.end());
        ms(0,v.size()-1,v);
        
        p=head;
        int i=0;
        while(p!=NULL){
            p->data=v[i];
            i++;
            p=p->next;
            
        }
        
        return(head);
    }
};


//{ Driver Code Starts.

void insert(struct Node **head, int data) {
    struct Node *temp = new Node(data);
    if (!(*head))
        (*head) = temp;
    else {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}

void print(struct Node *head) {
    struct Node *temp = head;
    while (head) {
        cout << head->data << ' ';
        temp = head;
        head = head->next;
    }
    cout << endl;
    while (temp) {
        cout << temp->data << ' ';
        temp = temp->prev;
    }
    cout << endl;
}

// Utility function to swap two integers
void swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

// Driver program
int main(void) {
    long test;
    cin >> test;
    while (test--) {
        int n, tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            insert(&head, tmp);
        }
        Solution ob;
        head = ob.sortDoubly(head);
        print(head);
    }
    return 0;
}

// } Driver Code Ends