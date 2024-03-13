//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            int[][] mat = new int[n][n];
            String[] S = br.readLine().trim().split(" ");
            int i = 0;
            int j = 0;
            for(int k = 0; k < S.length; k++){
                mat[i][j] = Integer.parseInt(S[k]);
                j++;
                if(j == n){
                    i++;
                    j = 0;
                }
            }
            Solution obj = new Solution();
            int[] ans = obj.matrixDiagonally(mat);
            for(int it = 0; it < ans.length; it++){
                System.out.print(ans[it] + " ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends

class Solution {
    public int[] matrixDiagonally(int[][] mat) {
        int n = mat.length;
        ArrayList<Integer>[] al = new ArrayList[n+n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int idx = i+j;
                if(al[idx] == null)al[idx] = new ArrayList<>();
                al[idx].add(mat[i][j]);
            }
        }
        
        int res[] = new int[n*n];
        int idx = 0;
        
        for(int i=0;i<al.length;i++){
            if((i&1) == 1){
                for(int x:al[i]){
                    res[idx++] = x;
                }
            }else{
                Collections.reverse(al[i]);
                for(int x:al[i]){
                    res[idx++] = x;
                }
            }
            
        }
        
        return res;
    }
}