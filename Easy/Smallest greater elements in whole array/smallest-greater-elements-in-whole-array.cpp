//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}

// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    // Complete the function
      int*arri=new int[n];
    for(int i=0;i<n;i++){
        arri[i]=arr[i];
    }
    
    sort(arri,arri+n);
    for(int i=0;i<n;i++){
        auto val=lower_bound(arri,arri+n,arr[i]+1)-arri;
        if(val==n){
            arr[i]=-10000000 ;
        }
        else{
            arr[i]=arri[val];
        }
    }
    return arr;
}
