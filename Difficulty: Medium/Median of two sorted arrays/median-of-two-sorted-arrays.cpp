//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(), m = arr2.size();
        int low = max(0, k-m), high = min(n, k);
        while(low <= high) {
            int pickedFirst = low + (high - low) / 2;
            int pickedSecond = k - pickedFirst;
            
            int pickedFirstElement = (pickedFirst-1 >= 0) ? arr1[pickedFirst-1] : -1;
            int pickedFirstNext = (pickedFirst < n) ? arr1[pickedFirst] : INT_MAX;
            
            int pickedSecondElement = (pickedSecond-1 >= 0) ? arr2[pickedSecond - 1] : -1;
            int pickedSecondNext = (pickedSecond < m) ? arr2[pickedSecond] : INT_MAX;
            
            if(pickedFirstElement <= pickedSecondNext && pickedSecondElement <= pickedFirstNext) {
                // the largest one on the left side will be the kth element
                return max(pickedFirstElement, pickedSecondElement);
            } else if(pickedFirstElement > pickedSecondNext) {
                // this means that the pickedFirst should move back 
                // as we have scope to increase the pickedSecond
                high = pickedFirst - 1;
            } else {
                low = pickedFirst + 1;
            }
        }
        
        return -1;
    }

    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size() + arr2.size();
        
        int val1 = kthElement(n/2, arr1, arr2);
        int val2 = kthElement((n/2)+1, arr1, arr2);
        return val1 + val2;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends