//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        // if two zeros the all array would be zero
        // if one zero only that pos will remain
        int pos_0=-1;
        int cnt=0;
        long long temp=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                pos_0=i;
                cnt++;
                continue;
            }
            temp*=nums[i];
        }
        if(cnt>1){
            for(int i=0; i<n;i++){
                nums[i]=0;
            }
            return nums;
        }
        
        else if (cnt==1){
            for(int i=0;i<n;i++){
            if(nums[i] !=0) nums[i]=0;
            else nums[i]=temp;
        }
        }
        else {
            for(int i=0;i<n;i++){
                nums[i]=temp/nums[i];
            }
        }
        
        return nums;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends