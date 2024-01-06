//{ Driver Code Starts
import java.io.*;
import java.util.*;


class IntArray
{
    public static int[] input(BufferedReader br, int n) throws IOException
    {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int N;
            N = Integer.parseInt(br.readLine());
            
            
            int[] arr = IntArray.input(br, N);
            
            Solution obj = new Solution();
            int res = obj.findMagicalNumber(N, arr);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends



class Solution {
    public static int findMagicalNumber(int N, int[] arr) {
        // code here
         int ans = -1,low=0,high=N-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid) {
            ans = arr[mid];
            high = mid - 1;  // look for a smaller index with the same value
        } else if (arr[mid] > mid) {
            high = mid - 1;  // look in the left half
        } else {
            low = mid + 1;   // look in the right half
        }
    }
    return ans;
    }
}
        
