//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
      Node* middleNode(Node* head){
      Node* fast = head;
      Node* slow = head;
      while(fast->next!=NULL){
          fast = fast->next;
          if(fast->next!=NULL){
              fast = fast->next;
              slow = slow->next;
          }
      }
      return slow;
  }
  
  Node* reverseLL(Node* prev, Node* curr){
      while(curr!=NULL){
          Node* nextNode = curr->next;
          curr ->next = prev;
          prev = curr;
          curr = nextNode;
      }
      return prev;
  }
  
  bool compare2LL(Node* head1, Node* head2){
      while(head2!=NULL){
          if(head1->data != head2->data){
              return false;
          }
          else{
              head1 = head1->next;
              head2 = head2->next;
          }
      }
      
      return true;
  }
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        Node* midNode = middleNode(head);
        Node* head2 = midNode->next;
        midNode->next = NULL;
        
        Node* prev = NULL;
        Node* curr = head2;
        head2 = reverseLL(prev, curr);
        
        bool ans = compare2LL(head, head2);
        return ans;
    }
};


//{ Driver Code Starts.

/* Function to print nodes in a given linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

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
            cout << "empty" << endl;
            continue;
        }

        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        if (ob.isPalindrome(head))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        // Clean up the remaining nodes to avoid memory leaks
        while (head != NULL) {
            struct Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}

// } Driver Code Ends