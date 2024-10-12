//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.lang.*;
import java.util.*;


// } Driver Code Ends
// User function Template for Java

class Solution {

    // Function for finding maximum and value pair
    public ArrayList<Integer> countArray(int[] arr, int x) {
        // Complete the function
        HashMap<Integer, Integer> frequencyMap = new HashMap<>();
        ArrayList<Integer> result = new ArrayList<>();
        
        // Count frequencies of elements in arr
        for (int num : arr) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }
        
        // Calculate the count for each element in arr
        for (int num : arr) {
            int average = (num + x) / 2; // Calculate the floor value of the average
            result.add(frequencyMap.getOrDefault(average, 0)); // Get count from the map
        }
        
        return result;
    }
}


//{ Driver Code Starts.

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int k = Integer.parseInt(br.readLine());
            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;
            Solution obj = new Solution();
            ArrayList<Integer> v = new ArrayList<Integer>();
            v = new Solution().countArray(arr, k);

            for (int i = 0; i < v.size(); i++) System.out.print(v.get(i) + " ");
            System.out.println();
            // System.out.println("~");
        }
    }
}

// } Driver Code Ends