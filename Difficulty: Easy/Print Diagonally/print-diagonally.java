//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            
            int matrix[][] = new int[n][n];
            
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                 matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.downwardDiagonal(n, matrix);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static ArrayList<Integer> downwardDiagonal(int N, int A[][]) {
        ArrayList<Integer> result = new ArrayList<>();
        
        // Traverse first row to add the elements of downward diagonals starting from each element in first row
        for (int col = 0; col < N; col++) {
            int i = 0, j = col;
            while (i < N && j >= 0) {
                result.add(A[i][j]);
                i++;
                j--;
            }
        }

        // Traverse first column to add the elements of downward diagonals starting from each element in first column
        for (int row = 1; row < N; row++) {
            int i = row, j = N - 1;
            while (i < N && j >= 0) {
                result.add(A[i][j]);
                i++;
                j--;
            }
        }

        return result;
    }
}
