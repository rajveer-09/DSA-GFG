//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int nums[], int low, int mid, int high)
    {
         // Your code here
        int i = low;
        int j = mid+1;

        vector<int> tmp;

        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                tmp.push_back(nums[i]);
                i++;
            }
            else{
                tmp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            tmp.push_back(nums[i]);
            i++;
        }
        while(j<=high){
            tmp.push_back(nums[j]);
            j++;
        }

        for(int i = low; i<=high ; i++){
            nums[i] = tmp[i-low];
        }
    }
    public:
    void mergeSort(int nums[], int low, int high)
    {
        //code here
         int mid = low + (high-low)/2;

        if(low>=high) return;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);

        merge(nums, low, mid, high);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends