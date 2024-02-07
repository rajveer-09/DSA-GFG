//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
         int count = 0;
        vector<int> ans;
        int check = -1;
        
        for(int i = 0; i<n ; i++){
            
            
            if(key == a[i]){
                check = 0;
                count++;
            
                if(count >= 3){
                    ans.pop_back();
                    ans.push_back(i);
                }
                if(count < 3){
                    ans.push_back(i);
                }
                
            }
            
            
            
        }
        if(count == 1){
            ans.push_back(ans[0]);
        }
        if(check == -1){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        
        return ans;
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends