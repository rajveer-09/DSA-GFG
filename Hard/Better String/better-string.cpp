//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      int subStringCount(string &str)

    {


        int arr[26] = {-1};


        int count = 1;


        for(int i = 0; i<str.length(); i++)

        {


            if(arr[str[i] - 'a'] == -1)

            {

                arr[str[i] - 'a'] = count;

                count *= 2;
            }

            else if(arr[str[i] - 'a'] != -1 )

            {

                int temp = arr[str[i] - 'a'];

                arr[str[i] - 'a'] = count;

                count *= 2;

                count = count - temp;

            }

        }

        return count;

    }

    string betterString(string str1, string str2) {
        
        int sub1_count = subStringCount(str1);

        int sub2_count = subStringCount(str2);
        
        if(sub1_count < sub2_count) return str2;

        else return str1;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends