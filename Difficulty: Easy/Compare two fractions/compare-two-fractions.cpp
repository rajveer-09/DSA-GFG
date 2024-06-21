//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isNum(char n)
    {
        if(n == '0' || n == '1' || n == '2' || n == '3' || n == '4' || n == '5' || n == '6' || n == '7' || n == '8' || n == '9')
            return true ;
            
        return false ;
    }
    
    string compareFrac(string str)
    {
        
        int a = 0 , b = 0 , c = 0 , d = 0 , index = 0 ;
        
        while(index < str.size() && isNum(str[index]))
            a = a * 10 + (str[index++] - '0') ;
            
        ++index ;
            
        while(index < str.size() && isNum(str[index]))
            b = b * 10 + (str[index++] - '0') ;
            
        index += 2 ;
        
        while(index < str.size() && isNum(str[index]))
            c = c * 10 + (str[index++] - '0') ;
            
        ++index ;
        
        while(index < str.size() && isNum(str[index]))
            d = d * 10 + (str[index++] - '0') ;
            
        double fraction1 = (double)a / (double)b ;
        double fraction2 = (double)c / (double)d ;
        
        if(fraction1 > fraction2)
            return to_string(a) + "/" + to_string(b) ;
        else if(fraction2 > fraction1)
            return to_string(c) + "/" + to_string(d) ;
            
        return "equal" ;
        
    }

};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends