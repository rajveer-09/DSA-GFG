//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}

// } Driver Code Ends



string ReverseSort(string str){
    //complete the function here
      
    int arr[26] = {0};
    
    for(int i = 0; i < str.size(); i++){
        arr[str[i] - 'a']++;
    }
    
    int idx = 0;
    
    for(int i = 0; i < 26; i++){
        int cnt = arr[i];
        
        while(cnt){
            str[idx] = 'a' + i;;
            idx++;
            cnt--;
        }
    }
    
    reverse(str.begin(), str.end());
    
    return str;
}