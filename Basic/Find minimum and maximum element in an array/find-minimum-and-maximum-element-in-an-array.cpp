//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

long long get_max(long long arr[], int n){
    
    long long maxi=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    return maxi;
}
long long get_mini(long long arr[], int n){
    
    long long mini=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<mini)
        mini=arr[i];
    }
    return mini;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long mx=get_max(a,n);
    long long mn=get_mini(a,n);
    
    return make_pair(mn,mx);
    
}