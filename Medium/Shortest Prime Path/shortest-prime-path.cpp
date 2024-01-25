//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    bool isPrime(int num){
        if(num<2) return 0;
        for(int i=2;i*i<=num;i++){
            if(num%i==0) return 0;
        }
        return 1;
    }
    int solve(int num1,int num2)
    {   
        if (num1 == num2) return 0;

        set<int> vis;
        queue<pair<int, int>> q;
        q.push({num1, 0});
        vis.insert(num1);
    
        while (!q.empty()) {
            int currNum = q.front().first;
            int dist = q.front().second;
            q.pop();
    
            for (int i = 0; i < 4; i++) {
                int oriNum = (int)(currNum /(pow(10, i))) % 10;
                for (int j = 0; j < 10; j++) {
                    if (j != oriNum) {
                        int newNum = currNum - (int)oriNum *(pow(10, i)) + (int)j * (pow(10, i));
                        if (isPrime(newNum) && vis.find(newNum) == vis.end() && newNum >= 1000 && newNum <= 9999) {
                            if (newNum == num2) return dist + 1;
                            q.push({newNum, dist + 1});
                            vis.insert(newNum);
                        }
                    }
                }
            }
        }
    
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int Num1,Num2;
      cin>>Num1>>Num2;
      Solution obj;
      int answer=obj.solve(Num1,Num2);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends