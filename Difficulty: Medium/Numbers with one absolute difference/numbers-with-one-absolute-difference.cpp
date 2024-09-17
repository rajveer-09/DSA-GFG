//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    void solve(int i , long long  n, set<long long >&st){
        queue<long long>q;
        q.push(i);
        while(!q.empty()){
            long long num = q.front();
            q.pop();
            if(num <= n && num >0){
                st.insert(num);
               // cout<<num<<" ";
                long long last = num %10;
                if(last == 0 ){
                    q.push(num *10+last + 1);
                }
                else if(last == 9){
                    q.push(num *10 +last -1);
                }
                else{
                      q.push(num *10+last + 1);
                      q.push(num *10 +last -1);
                }
            }
        }
    }
    vector<long long> absDifOne(long long N)
    {
        //code here.
        vector<long long >res;
        set<long long>st;
        if(N <=9)return res;
        for(int i=0; i<=N && i<=9; i++){
            solve(i, N, st);
        }
        for(auto it: st){
            if(it > 9){
                res.push_back(it);
            }
        }
        return res;
    }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            long long n;
            cin>>n;
            Solution ob;
            vector<long long> res = ob.absDifOne(n);
            for(int i = 0;i<res.size();i++)
                cout<<res[i]<<" ";
            if(res.size()==0)
                cout<<-1;
            cout<<endl;    
        }
}

// } Driver Code Ends