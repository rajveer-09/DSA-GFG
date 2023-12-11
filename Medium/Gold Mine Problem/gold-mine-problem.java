//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String inline[] = in.readLine().trim().split("\\s+");
            int n = Integer.parseInt(inline[0]);
            int m = Integer.parseInt(inline[1]);
            String inline1[] = in.readLine().trim().split("\\s+");
            int M[][] = new int[n][m];
            for(int i = 0;i < n*m;i++){
                M[i/m][i%m] = Integer.parseInt(inline1[i]);
            }
            
            Solution ob = new Solution();
            System.out.println(ob.maxGold(n, m, M));
        }
    }
} 
// } Driver Code Ends


//User function Template for Java

class Solution{
    static int maxGold(int n, int m, int M[][])
    {
        // code here
         int maxi = Integer.MIN_VALUE;
        int[][]dp = new int[n][m];
        for(int[]row:dp) Arrays.fill(row,-1);
        for(int i=0;i<n;i++){
            maxi = Math.max(maxi,solve(i,m-1,M,dp));
        }
        return maxi;
    }
    static int solve(int i, int j, int[][]M,int[][]dp){
        int n = M.length;
        int m = M[0].length;
        if(i<0 || i>=n) return Integer.MIN_VALUE;
        if(j==0) return M[i][0];
        if(dp[i][j]!=-1) return dp[i][j];
        int left = M[i][j]+solve(i,j-1,M,dp);
        int leftup = M[i][j]+solve(i-1,j-1,M,dp);
        int leftdn = M[i][j]+solve(i+1,j-1,M,dp);
        return dp[i][j] = Math.max(left,Math.max(leftup,leftdn));
    }
}