//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
    sort(a1,a1+n);
    sort(a2,a2+m);
    int i = 0;
    int k = 0;
    int count = 0;
    while(i<m && k<n){
        if(a1[k]==a2[i]){
            count++;
            i++;
        }
        k++;
    }
    if(count == m){
        return "Yes";
    }
    else{
        return "No";
    }
    
}