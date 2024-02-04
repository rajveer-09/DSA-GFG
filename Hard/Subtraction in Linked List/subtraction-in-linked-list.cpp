//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
private:
    int reverse(Node * &head){
        while(head->next && head->data==0) head=head->next;
        int cnt = 0;
        Node * prev = NULL;
        Node * curr = head;
        Node * next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        head = prev;
        return cnt;
    }
    Node * sub(Node * head1,Node* head2){
        Node * prev = NULL;
        int borrow = 0;
        
        while(head1 && head2){
            Node * temp = new Node (0);
            int x = head1->data + borrow;
            borrow = 0;
            if((x-head2->data)<0){
                x += 10;
                borrow = -1;
            }
            
            temp->data = x-head2->data;
            temp->next = prev;
            prev = temp;
            head1 = head1->next;
            head2 = head2->next;
        }
        
        while(head1){
            Node * temp = new Node (0);
            temp->data = head1->data + borrow;
            borrow = 0;
            if(temp->data < 0){
                temp->data += 10;
                borrow = -1;
            }
            
            temp->next = prev;
            prev = temp;
            head1 = head1->next;
        }
        
        return prev;
    }
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        
        int n1 = 0,n2 = 0;
        n1 = reverse(head1);
        n2 = reverse(head2);
        
        if(n2 > n1){
            swap(head1,head2);
        }
        else if(n1==n2){
            int cnt1 = 0,cnt2 = 0;
            Node*a = head1;
            Node*b = head2;
            
            while(a){
                if(a->data > b->data){
                    cnt1 = 1;
                    cnt2 = 0;
                }else if(a->data < b->data){
                    cnt1 = 0;
                    cnt2 = 1;
                }
                a = a->next;
                b = b->next;
            }
            if(cnt2 > cnt1) swap(head1,head2);
        }
        
        Node * ans = sub(head1,head2);
        
        while(ans->next && ans->data == 0) ans = ans->next;
        
        return ans;
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends