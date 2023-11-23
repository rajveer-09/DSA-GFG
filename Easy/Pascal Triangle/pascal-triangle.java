//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());

            ArrayList<Long> ans = new Solution().nthRowOfPascalTriangle(n);
            printAns(ans);
        }
    }
    public static void printAns(ArrayList<Long> ans) {
        for (Long x : ans) {
            System.out.print(x + " ");
        }
        System.out.println();
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
      ArrayList<Long> nthRowOfPascalTriangle(int n) {
        ArrayList<Long> list = new ArrayList<>();
        
        if (n < 0) {
            return list; 
        }

        long[][] arr = new long[n][];
        
        for (int k = 0; k < n; k++) {
            arr[k] = new long[k + 1]; 

            for (int j = 0; j <= k; j++) {
                if (j == 0 || j == k) {
                    arr[k][j] = 1L;
                } else {
                    arr[k][j] = (arr[k - 1][j - 1] + arr[k - 1][j])%(1000000007L);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            list.add(arr[n - 1][i]);
        }

        return list;
    }

    
}