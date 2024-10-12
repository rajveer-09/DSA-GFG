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
        while(t-->0){
            int q = sc.nextInt();
            ArrayList<Long> query = new ArrayList<>();
            for(int i=0;i<q;i++){
                query.add(sc.nextLong());
            }
            Solution ob = new Solution();
                
            ArrayList<Integer> ans = ob.threeDivisors(query,q);
            for(int cnt : ans) {
                System.out.println(cnt);
            }
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution {
    static ArrayList<Integer> threeDivisors(ArrayList<Long> query, int q) {
        ArrayList<Integer> result = new ArrayList<>();
        
        // Find the maximum value in queries to limit our sieve
        long maxN = 0;
        for (long n : query) {
            if (n > maxN) {
                maxN = n;
            }
        }

        int maxLimit = (int) Math.sqrt(maxN);
        
        // Sieve of Eratosthenes to find all primes up to maxLimit
        boolean[] isPrime = new boolean[maxLimit + 1];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= maxLimit; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= maxLimit; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // List of primes up to maxLimit
        ArrayList<Integer> primes = new ArrayList<>();
        for (int i = 2; i <= maxLimit; i++) {
            if (isPrime[i]) {
                primes.add(i);
            }
        }

        // Precompute the number of integers with exactly 3 divisors up to each N
        int[] threeDivisorsCount = new int[(int) maxN + 1];
        
        for (int prime : primes) {
            long square = (long) prime * prime;
            if (square > maxN) {
                break;
            }
            threeDivisorsCount[(int) square] = 1;
        }

        // Create the prefix sum array to count cumulative numbers with exactly 3 divisors
        for (int i = 1; i <= maxN; i++) {
            threeDivisorsCount[i] += threeDivisorsCount[i - 1];
        }

        // Answer each query
        for (long n : query) {
            result.add(threeDivisorsCount[(int) n]);
        }

        return result;
    }

    public static void main(String[] args) {
        ArrayList<Long> query = new ArrayList<>();
        query.add(10L);
        query.add(25L);
        int q = 2;
        System.out.println(threeDivisors(query, q));  // Output: [2, 3]
    }
}
