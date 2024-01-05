//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	vector<pair<int, int>> factorize(int n)
    {
        vector<pair<int, int>> res;
        for(int i=2;i*i<=n;i++)
        {
            if(n % i == 0)
            {
                int count = 0;
                while(n % i == 0)
                {
                    n = n / i;
                    count += 1;
                }
                res.push_back({i, count});
            }
        }
        if(n > 1)
        {
            res.push_back({n, 1});
        }
        return res;
    }
    int sumpf(int n)
    {
        vector<pair<int, int>> v = factorize(n);
        int sum = 0;
        for(auto it : v)
        {
            sum += it.second;
        }
        return sum;
    }
    int sumOfPowers(int a, int b){
        int res = 0;
        for(int i=a;i<=b;i++)
        {
            res += sumpf(i);
        }
        return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends