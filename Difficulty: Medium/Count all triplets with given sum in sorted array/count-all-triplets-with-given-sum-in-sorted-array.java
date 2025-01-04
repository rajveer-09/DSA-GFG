//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String[] arr1Str = sc.nextLine().split(" ");
            int[] arr = Arrays.stream(arr1Str).mapToInt(Integer::parseInt).toArray();
            int target = Integer.parseInt(sc.nextLine());

            Solution ob = new Solution();
            int ans = ob.countTriplets(arr, target);
            System.out.println(ans);
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    public int countTriplets(int[] arr, int target) {

        int ans=0;
        for(int i=0;i<arr.length-2;i++){
            
            int j=i+1;
            int k=arr.length-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]>target) k--;
                else if(arr[i]+arr[j]+arr[k]<target) j++;
                else {
                    int temp=arr[j],temp2=arr[k];
                    int count=0,count1=0;
                    while(arr[j]==temp && j<k){j++; count++;}
                    
                    j--;
                    while(arr[k]==temp2 && k>j){k--; count1++;}
                     
                     j++;
                    if(temp==temp2) ans+=(count*(count+1))/2;
                    else ans+=count*count1;
                }
            }
        
        }
        return ans;
    }

    
    
}