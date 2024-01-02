//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countEleSmallerEqualToMid(vector<int>& arr,int m,int mid){
        int low=0, high=m-1;
        while(low<=high){
            int mid_=((low+high)>>1);
            if(arr[mid_]<=mid){
                low=mid_+1;
            }
            else if(arr[mid_]>mid){
                high=mid_-1;
            }
        }
        return low;
    }
    
    int median(vector<vector<int>> &arr, int n, int m){
        // code here
        int low=1, high=2000;
        while(low<=high){
            int mid=((low+high)>>1);
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=countEleSmallerEqualToMid(arr[i],m,mid);
                // cnt+=upper_bound(arr[i].begin(),arr[i].end(),mid)-arr[i].begin();
            }
            if(cnt<=((n*m)>>1)){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;          
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends