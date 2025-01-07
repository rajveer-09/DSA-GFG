//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev(string s) {
    if (s.size() % 2 != 0) return -1;

    int op = 0;
    int cl = 0;

    for (char c : s) {
        if (c == '{') {
            op++;
        } else {
            if (op > 0) {
                op--;
            } else {
                cl++;
            }
        }
    }

    return (cl + 1) / 2 + (op + 1) / 2;
}