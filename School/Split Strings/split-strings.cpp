//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        vector<string> v;
        
        string S1 = "";
        string S2 = "";
        string S3 = "";
        
        int len = S.length();
        
        for(int i = 0; i<len;i++){
            if(S[i]>='A' && S[i]<='Z' || S[i]>='a' && S[i]<='z'){
                S1.push_back(S[i]);
            }
            else if(S[i]>='0' && S[i] <= '9'){
                S2.push_back(S[i]);
            }
            else{
                S3.push_back(S[i]);
            }
        }
        
        v.push_back(S1);
        v.push_back(S2);
        v.push_back(S3);
        
        return v;
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
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends