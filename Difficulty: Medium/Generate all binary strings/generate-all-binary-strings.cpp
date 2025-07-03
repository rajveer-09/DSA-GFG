// User function Template for C++

class Solution {
public:
    void rec(int n, vector<string>& ans, string &s){
        if(s.size() == n){
            ans.push_back(s);
            return;
        }

        // place 0
        s += '0';
        rec(n, ans, s);
        s.pop_back();
        
        // place 1
        if(s.back() != '1'){
            s += '1';
            rec(n, ans, s);
            s.pop_back();
        }


    }
    vector<string> generateBinaryStrings(int n) {
        // Your code goes here
        vector<string> ans;
        string s = "";

        rec(n, ans, s);

        return ans;
    }
};
