//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        if(!head) 
        {
            return head;
        }
        
        stack<Node*>st;

        Node *temp = head;
        
        while(temp){
            st.push(temp);
            temp = temp->next;
        }
        long long int carry = 0;
        long long int digit = 0;
        if(!st.empty()){
            Node *last  = st.top();
            digit = last->data + 1;
            if(digit > 9) {
                carry = 1;
                digit = 0;
            }
            last->data = digit;
            st.pop();
        }
        
        
        
        while(!st.empty()){
            Node *last  = st.top();
            int sum = last->data + carry;
            digit = sum%10;
            carry = sum/10;
            last->data = digit;
            st.pop();
        }
        
        if(head->data == 0 && carry == 1)
        {
               Node *newNode = new Node(1);
               newNode->next = head;
               head = newNode;
               return head;
        }
        
        return head;
    }
};

//{ Driver Code Starts.

int main() {
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
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends