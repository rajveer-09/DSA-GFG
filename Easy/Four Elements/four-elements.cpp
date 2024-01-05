//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int arr[], int n, int X)  
{
    sort(arr, arr+n);
            for(int k=0;k<n;k++)
        for(int i =k+1;i<n;i++){
            int sum = X-arr[i]-arr[k];
            int left = i+1, right = n-1;
            
            while(left <right){
                if(arr[left]+arr[right] == sum ){
                    return 1;
                }
                else if(arr[left] + arr[right] > sum){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return 0;
}