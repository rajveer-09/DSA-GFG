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
        int c0=0,c1=0,c2=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            c0++;
            if(arr[i]==1)
            c1++;
            if(arr[i]==2)
            c2++;
        }
        for(int i=0;i<n;i++){
            if(i<c0)
            arr[i]=0;
            
            else if(i>=c0&&i<c0+c1)
            arr[i]=1;
            
            else
            arr[i]=2;
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