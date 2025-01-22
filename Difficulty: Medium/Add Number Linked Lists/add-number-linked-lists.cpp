//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
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

class Solution {
  public:
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* current=head;
        while(current!=NULL){
            Node* store=current->next;
            current->next=prev;
            prev=current;
            current=store;
        }
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        Node* head1=reverse(num1);
        Node* head2=reverse(num2);
        int carry=(head1->data+head2->data)/10;
        Node* newhead=new Node((head1->data+head2->data)%10);
        Node* temp=newhead;
        head1=head1->next;
        head2=head2->next;
        while(head1 && head2){
            int sum=carry+head1->data+head2->data;
            carry=sum/10;
            sum=sum%10;
            Node* newnode=new Node(sum);
            temp->next=newnode;
            temp=newnode;
            head1=head1->next;
            head2=head2->next;
        }
        while(head1){
            int sum=carry+head1->data;
            carry=sum/10;
            sum=sum%10;
            Node* newnode=new Node(sum);
            temp->next=newnode;
            temp=newnode;
            head1=head1->next;
        }
        while(head2){
            int sum=carry+head2->data;
            carry=sum/10;
            sum=sum%10;
            Node* newnode=new Node(sum);
            temp->next=newnode;
            temp=newnode;
            head2=head2->next;
        }
        if(carry){
            Node* newnode=new Node(carry);
            temp->next=newnode;
        }
        newhead=reverse(newhead);
        while(newhead->data==0){
              Node* store=newhead->next;
              newhead->next=NULL;
              newhead=store;
        }
        return newhead;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends