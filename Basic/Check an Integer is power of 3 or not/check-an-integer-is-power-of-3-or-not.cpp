//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isPowerof3(int n){
        // code here 
         if(1162261467%n){return "No";}
          else {return "Yes";}
    
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPowerof3(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends