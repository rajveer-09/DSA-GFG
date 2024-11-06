//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n1=str1.size()-1;
        int n2= str2.size()-1;
        
        if(n1!=n2) return false;
        
        if(str2[0]==str1[n1-1]&& str2[1]==str1[n1]){
            for(int i=0;i<n1-2;i++){
                if(str1[i]!=str2[i+2]) return false;
            }
            
            return true;
        }
         if(str2[n2-1]==str1[0]&& str2[n2]==str1[1]){
            for(int i=0;i<n1-2;i++){
                if(str1[i+2]!=str2[i]) return false;
            }
            
            return true;
        }
        
        return false;
    }

};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends