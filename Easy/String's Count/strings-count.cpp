//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
     long long ans=0;
    ans+=1;//0b ,0c,all a;
    ans+=n;//1b and all a (b can be at n diff positions forming different string)
    ans+=n;//1c and all a (c can be at n diff positions forming different string)
    ans+=n*(n-1);//1b and 1c and rest a(b having n options but c left with remaining n-1 options)
    ans+=n*(n-1)/2;//0b 2 c rest all a(n position for c,rest n-1 position for other c (/2 as 50% combinations formed will be same due to 2 c ))
    ans+=n*(n-1)*(n-2)/2;//1b and 2 c rest a( n positions for b ,n-1 left for c,n-2 left for other c)
    return ans;
}