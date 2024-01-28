//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        int num = 2;
        while(n){
            int temp = num;
            bool flag = true;
            while(temp){
                int a = temp%10;
                if(a!=2 && a!=3 && a!=5 && a!=7)flag=false;
                temp/=10;
            }
            if(flag)n--;
            if(n==0)return num;
            num++;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends