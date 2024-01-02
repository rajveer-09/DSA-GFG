//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int n=v.size();
int a=0;
int e=-1;
bool c= false;

    for(int i=0 ; i<n;i++){
        if(v[i]==x && c==false){
            e=i;
            c =true;
            
        }
        else if(v[i]==x && c ==true){
            a=a+1;
        }
       
    }
   if(e==-1){
       return std::make_pair(-1,-1);
   }
   
    else{
        return std::make_pair(e, a+e);
    }
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends