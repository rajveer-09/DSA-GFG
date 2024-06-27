//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorResult = 0;
        
        // Step 1: Get the XOR of all elements in the array
        for (int num : nums) {
            xorResult ^= num;
        }
        
        // Step 2: Find the rightmost set bit in xorResult
        int rightmostSetBit = xorResult & (-xorResult);
        
        // Step 3: Initialize two variables to store the results
        int num1 = 0, num2 = 0;
        
        // Step 4: XOR all numbers in the array based on rightmostSetBit
        for (int num : nums) {
            if (num & rightmostSetBit) {
                num1 ^= num;
            } else {
                num2 ^= num;
            }
        }
        
        // Return the numbers in ascending order
        if (num1 > num2) {
            swap(num1, num2);
        }
        
        return {num1, num2};
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends