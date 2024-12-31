//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        int c1 = 0;
        long long ans = 0;
        
        for(char ch : a) {
            if(ch == '1'){
                c1++;
                ans += c1 - 1;
            }
        }    
        
        return ans;
        
    }

};

//{ Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends