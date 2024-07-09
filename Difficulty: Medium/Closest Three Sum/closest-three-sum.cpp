//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        vector<int>ans;
        int mini = INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++)
        {
            int start = i+1;
            int end = arr.size()-1;
            
                while(start < end)
                {
                    int sum = arr[i] + arr[start] + arr[end];
                    if(sum == target)
                    {
                      return target;
                    }
                    
                    int diff = abs(target - sum);
                    ans.push_back(sum);
                    if(mini > diff)
                    {
                        mini = diff;
                    }
                    
                    if(sum < target)
                    {
                        start++;
                    }
                    else{
                        end--;
                    }
                }
        }
        int tempE = mini + target;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i] == tempE)
            {
                return tempE;
            }
        }
        return (target-mini);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends