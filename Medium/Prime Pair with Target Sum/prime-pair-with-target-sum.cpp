//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
   bool isPrime(int n){
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)return false;
      }
      return true;
  }
    vector<int> getPrimes(int n) {
        vector<int>result(2,-1);
        int s=2,e=n-1;
        while(s<=e){
            if(s+e==n){
                if(isPrime(s)&&isPrime(e)){
                    if(result[0]!=-1&&result[0]<s){
                        s++;
                        e--;
                        continue;
                    }
                    result[0]=s;
                    result[1]=e;  
                }
                s++;
                e--;
            }
            
            else if(s+e<n)s++;
            else e--;
            
            
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends