//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
     char board[26];
    int lim=3, num=1;
    //fill up the board
    for (int i='a';i<='w';i+=lim) {
        lim=(i==(int)'p'||i==(int)'w') ? 4:3;
        num++;
        //board maps ASCII(char)-'a' -> string(corresponding_numeric)
        for (int j=i;j<i+lim;j++) {
            board[j-'a'] = (char)(num+'0');
        }
    }
    //convert from string to its numeric representation
    string ans="";
    for (auto &x:s) {
        ans += board[x-'a'];
    }
    return ans;
}
