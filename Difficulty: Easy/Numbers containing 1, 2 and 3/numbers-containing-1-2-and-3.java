//{ Driver Code Starts
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine().trim());

        while (t-- > 0) {
            List<Integer> arr = new ArrayList<>();
            String input = sc.nextLine();

            StringTokenizer st = new StringTokenizer(input);
            while (st.hasMoreTokens()) {
                arr.add(Integer.parseInt(st.nextToken()));
            }

            Solution ob = new Solution();
            List<Integer> result = ob.filterByDigits(arr);

            for (int x : result) {
                System.out.print(x + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public List<Integer> filterByDigits(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (Integer num : arr) {
            if (consistsOf123(num)) {
                result.add(num);
            }
        }
        return result;
    }

    private boolean consistsOf123(int num) {
        if (num == 0) return false;
        num = Math.abs(num);
        while (num != 0) {
            int digit = num % 10;
            if (digit != 1 && digit != 2 && digit != 3) {
                return false;
            }
            num /= 10;
        }
        return true;
    }
}
