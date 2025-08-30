// User function Template for Java

class Solution {
    public int findMaximum(int[] arr) {
       int ans = arr[0];
       for(int a : arr)
           if(a>=ans) ans = a;
           else return ans;
       return ans;
    }
}