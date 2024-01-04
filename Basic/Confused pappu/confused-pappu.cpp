//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    //code
    int RS=amount;
    string str=" ";
    while(amount){
        long long last=amount%10;
            if(last==6){
                str+='9';
            }else{
                str+=to_string(last);
            }
        amount/=10;
    }
    reverse(str.begin(),str.end());
    long long num=0;
    for(int i=0;i<str.length()-1;i++){
        num=num*10+(str[i]-'0');
    }
    return str.empty()?0:(num-RS);
}