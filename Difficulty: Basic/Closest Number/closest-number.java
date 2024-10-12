//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S[] = read.readLine().split(" ");
            
            int N = Integer.parseInt(S[0]);
            int M = Integer.parseInt(S[1]);

            Solution ob = new Solution();
            System.out.println(ob.closestNumber(N,M));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static int closestNumber(int N, int M) {
        // Find the quotient of N divided by M
        int quotient = N / M;

        // Calculate the two closest multiples of M
        int lowerMultiple = M * quotient;
        int upperMultiple = (N * M > 0) ? M * (quotient + 1) : M * (quotient - 1);

        // Determine which multiple is closer to N
        if (Math.abs(N - lowerMultiple) < Math.abs(N - upperMultiple)) {
            return lowerMultiple;
        } else {
            return upperMultiple;
        }
    }
}
