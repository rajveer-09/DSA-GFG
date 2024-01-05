//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int st=0;
        int ct=0;
        int ed=n-1;
        
        for(int i=0;i<n;i++){
            if(arr[ct]==0){
                swap(arr[st],arr[ct]);
                st++;
                ct++;
                
            }
            else if(arr[ct]==1)
            ct++;
            
            else{
                swap(arr[ct],arr[ed]);
                ed--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends