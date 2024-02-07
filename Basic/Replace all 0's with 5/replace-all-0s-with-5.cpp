//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int p=n;
    int N=0;
    int i=0;
    while(p){
        int d=p%10;
        if(d==0) d=5;
        N=N+(d)*pow(10,i);
        p/=10;
        i++;
    }
    return N;
}