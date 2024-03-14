//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            char A[][] = new char[N][N];
            for (int i = 0; i < N; i++) {
                String S[] = read.readLine().trim().split(" ");
                for (int j = 0; j < N; j++) A[i][j] = S[j].charAt(0);
            }
            Solution ob = new Solution();
            System.out.println(ob.largestSubsquare(N, A));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    int largestSubsquare(int n, char a[][]) {
        int row[][] = new int[n][n];
        int col[][] = new int[n][n];
        for(int i=0;i<n;i++){
            int r = 0,c = 0;
            for(int j=0;j<n;j++){
                r = a[i][j]=='X'?++r:0;
                c = a[j][i]=='X'?++c:0;
                row[i][j] = r;
                col[j][i] = c;
            }
        }
        int res = 0;
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int s = Math.min(row[i][j],col[i][j]);
                while(s>res){
                    if(row[i-s+1][j]>=s && col[i][j-s+1]>=s) res = s;
                    else s--;
                }
            }
        }
        return res;
    }
};