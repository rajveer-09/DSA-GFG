//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}

// } Driver Code Ends


string solve(string a) {
    // code here
     string vowel="aeiou";
    string ans="";
    int count=0;
    for(int i=0;i<a.length();i++){
        if((vowel.find(a[i])==string::npos)&&(ans.find(a[i])==string::npos)){
               ans+=a[i];
               count++;
        }
    }
 return count%2==0?"SHE!":"HE!";
}