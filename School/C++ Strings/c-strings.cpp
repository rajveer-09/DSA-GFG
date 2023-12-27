//{ Driver Code Starts
#include<iostream>
#include<string>
using namespace std;

string conCat(string a , string b);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<conCat(a,b)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string conCat(string s1 , string s2)
{
    // code here.
    string s3="";
    for(int i=0;i<s1.length();i++){
        s3.push_back(s1[i]);
    }
    for(int i=0;i<s2.length();i++){
        s3.push_back(s2[i]);
    }
    return s3;
}
