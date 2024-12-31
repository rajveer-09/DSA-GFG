//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        int freq[26]{0};
        
        for(char ch : s){
            freq[ch - 'a']++;
        }
        
        int maxIndex = 0;
        
        for(int i = 0; i < 26; i++){
            if(freq[i] > freq[maxIndex]){
                maxIndex = i;
            }
        }
        
        return maxIndex + 'a';
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends