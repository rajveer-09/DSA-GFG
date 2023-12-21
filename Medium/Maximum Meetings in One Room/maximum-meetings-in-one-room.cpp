//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

struct Meeting
{
    int s;
    int e;
    int idx;
};
bool cmp(Meeting m1, Meeting m2)
{
    return (m1.e < m2.e);
}
class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F)
    {
        //1)in order to combine start, end and idx
        vector<Meeting> meet;              
        for(int i=0; i<N; i++)
        {
            Meeting m;
            m.s=S[i];
            m.e=F[i];
            m.idx=i;
            
            meet.push_back(m);
        } 
        //2)sort according to end time
        sort(meet.begin(), meet.end(), cmp);
        //3)ans vector
        vector<int> ans;
        ans.push_back(meet[0].idx +1);
        Meeting last=meet[0];
        for(int i=1; i<meet.size(); i++)
        {
            if(meet[i].s > last.e)
            {
                ans.push_back(meet[i].idx+1);
                last=meet[i];
            }
        }
        //4)have to return ans in sorted order
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends