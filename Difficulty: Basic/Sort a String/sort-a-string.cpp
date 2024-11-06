//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}




// } Driver Code Ends


string sort(string s) {
    int arr[26] = {0};
    
    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }
    
    int idx = 0;
    
    for (int i = 0; i < 26; i++) {
        while (arr[i]-- > 0) {
            s[idx] = 'a' + i;
            idx++;
        }
    }
    
    return s;
}
