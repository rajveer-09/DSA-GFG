//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
    int a[26]{0};
    int n=sizeof(a)/sizeof(int);
    for (int i =0;i<s.size();i++)
    {
        a[char(s[i]-'a')]+=1;
    }
    
    string s1="";
    for (int i=0;i<n;i++)
    {
        int b=a[i];
        while (b>0)
        {
            s1+=char('a'+i);
            b--;
        }
    }
    return s1;
}