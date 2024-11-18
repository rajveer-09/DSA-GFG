//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    bool check(int arr[]) {
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) return false;
        }
        return true;
    }
    
    int search(string p, string s) {
        int freq[26] = {0};
        int ans = 0;

        for (char it : p) freq[it - 'a']++;

        int st = 0;

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']--;

            if ((i - st + 1) == p.size()) {
                if (check(freq)) {
                    ans++;
                }

                freq[s[st] - 'a']++;
                st++;
            }
        }

        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends