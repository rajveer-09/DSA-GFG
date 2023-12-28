//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int ls1 = s.length();
    int ls2 = x.length();
    for(int i = 0; i < ls1; i++){
        if(s[i] == x[0]){
            for(int j = 0; j < ls2; j++){
                if(s[i+j] == x[j]){
                    if(j == ls2-1){
                        return i;
                    }                    
                }else{
                    break;
                }
            }
        }
    }
    return -1;
}