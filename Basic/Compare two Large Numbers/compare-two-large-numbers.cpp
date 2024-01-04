//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int check(string a,string b);
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string a, b;
    cin >> a >> b;
    cout<<check(a,b)<<'\n';


    }

    return 0;
}

// } Driver Code Ends


int check(string a,string b){
    //code
   int i=0,j=0;
   while(a[i]=='0') i++;
   while(b[j]=='0') j++;
   if((a.length()-i)<(b.length()-j)) return 1;
   if((a.length()-i)>(b.length()-j)) return 2;
   while(i<a.length() && j<b.length()){
       if(a[i]!=b[i]){
           int x = a[i]-'0';
           int y = b[j]-'0';
           if(x>y) 
             return 2;
           else if(x<y)
             return 1;
       }
       i++;
       j++;
   }
   return 3;


    
}