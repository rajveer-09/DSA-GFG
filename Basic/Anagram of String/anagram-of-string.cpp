//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes 
 vector<int> freq1(26, 0);
    vector<int> freq2(26,0);
    
    // Count frequency of each character in str1
    for(int c : str1){
        freq1[c - 'a']++;
    }
    // count frequency of each character in str2
    for(int c : str2){
        freq2[c - 'a']++;
    }
    
    // find absolute difference in frequency of each character
    int deletion = 0;
    for(int i=0; i<26; i++){
        deletion += abs(freq1[i] - freq2[i]);
    }
    
    // return the answer
    return deletion;
}