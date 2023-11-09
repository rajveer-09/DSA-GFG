//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int n = S.size() ;
        int j=0;
        string ans ="" ;
        
        int curr=1;
        
        while(j<n)
        {
            while(S[j]!='I' and j<n)
                j++;
            if(j==n)
            {
                 string p;
                for(int k=curr;k<=j+1 ;k++)
                {
                    p += to_string(curr);
                    curr++;
                }
                reverse(p.begin(),p.end()); 
                ans += p ;
                
            }
            else
            {
                string p;
                for(int k=curr;k<=j+1 ;k++)
                {
                    p += to_string(curr);
                    curr++;
                }
                reverse(p.begin(),p.end()); 
                ans += p ;
                
                if(j==n-1)
                ans += to_string(curr);
            }
        j++;
            
        }
        return ans ;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends