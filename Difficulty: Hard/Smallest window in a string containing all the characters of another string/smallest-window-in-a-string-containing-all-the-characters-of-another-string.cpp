//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    int start=0,end=0;
    string smallestWindow (string s, string p)
    {
        // Your code here
        int m=p.size();
        int n=s.size();
        
        vector<int> cnt(26,0);
        for(int i=0;i<m;i++){
            cnt[p[i]-'a']++;
        }
        
        int low=0,high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(s,cnt,mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(low>n){
            return "-1";
        }
        return s.substr(start,end-start+1);
    }
    bool isPossible(string& s,vector<int>& cnt,int mid){
        vector<int> c(26,0);
        int i=0;
        
        for(int j=0;j<s.size();j++){
            c[s[j]-'a']++;
            if(j-i+1>mid){
                c[s[i]-'a']--;
                i++;
            }
            if(j-i+1==mid){
                bool flag=true;
                for(int i=0;i<26;i++){
                    if(c[i]<cnt[i]){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    start=i;
                    end=j;
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends