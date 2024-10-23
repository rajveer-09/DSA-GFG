//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            int[][] matrix = new int[n][n];
            for (int i = 0; i < n; i++) {
                String[] S = br.readLine().trim().split(" ");
                for (int j = 0; j < n; j++) matrix[i][j] = Integer.parseInt(S[j]);
            }
            Solution ob = new Solution();
            ob.rotateMatrix(matrix);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(matrix[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public void rotateMatrix(int[][] mat) {
        int n = mat.length;

        // Rotate the matrix by 180 degrees
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[n - i - 1][n - j - 1];
                mat[n - i - 1][n - j - 1] = temp;
            }
        }

        // Handle the middle row if the matrix has odd dimensions
        if (n % 2 != 0) {
            int mid = n / 2;
            for (int j = 0; j < n / 2; j++) {
                int temp = mat[mid][j];
                mat[mid][j] = mat[mid][n - j - 1];
                mat[mid][n - j - 1] = temp;
            }
        }
    }
}
