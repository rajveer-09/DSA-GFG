//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<pair<int,int>> prefix(n);
        vector<pair<int,int>> suffix(n);
        
        prefix[0] = {arr[0],arr[0]};
        suffix[n-1] = {arr[n-1],arr[n-1]};
        
        for(int i = 1; i < n; ++i) {
            int rev = n - i - 1;
            prefix[i] = {
                min(prefix[i-1].first,arr[i]),
                max(prefix[i-1].second,arr[i])
            };
            suffix[rev] = {
                min(suffix[rev + 1].first, arr[rev]),
                max(suffix[rev + 1].second, arr[rev])
            };
        }
        
        int minDiff = INT_MAX;
        for(int i = 0; i <= n-k; ++i) {
            int minElement;
            if(i == 0) {
                minElement = suffix[i+k].first;
            } else if (i + k == n) {
                minElement = prefix[i-1].first;
            } else {
                minElement = min(prefix[i-1].first,suffix[i+k].first);
            }
            
            int maxElement;
            
            if(i == 0) {
                maxElement= suffix[i+k].second;
            } else if(i + k == n) {
                maxElement = prefix[i-1].second;
            } else {
                maxElement = max(prefix[i-1].second,suffix[i+k].second);
            }
            
            minDiff = min(maxElement - minElement,minDiff);
        }
        return minDiff;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends