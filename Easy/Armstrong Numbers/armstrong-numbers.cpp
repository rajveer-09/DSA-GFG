//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
         int temp=n;
        
        int digit=0;
        //count the digit present in the number n
        while(temp>0){
            digit++;
            temp=temp/10;
        }
        //reset the value of temp
        temp=n;
        int sum=0;
        //calculate the sum of the number by applying concept of armstrong
        while(temp>0){
            int rem=temp%10;
            sum=sum+pow(rem,digit);
            temp=temp/10;
            
        }
        //check if calculated value (sum) is equal to n or not
        if(n==sum){
            return "Yes";
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends