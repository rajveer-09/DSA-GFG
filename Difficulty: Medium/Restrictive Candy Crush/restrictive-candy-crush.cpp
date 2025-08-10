class Solution {
public:
    string Reduced_String(int k, string s) {
        if (k == 1) return "";
        
        stack<pair<char, int>> st;
        for (char c : s) {
            if (st.empty() || st.top().first != c) {
                st.push({c, 1});
            } else {
                st.top().second++;
                if (st.top().second == k) {
                    st.pop();
                }
            }
        }

        string res = "";
        while (!st.empty()) {
            char c = st.top().first;
            int count = st.top().second;
            st.pop();
            res += string(count, c);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};