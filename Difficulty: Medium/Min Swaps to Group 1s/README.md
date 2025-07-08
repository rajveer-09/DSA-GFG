<h2><a href="https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-group-all-1s-together2451/1">Min Swaps to Group 1s</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary array consisting of only 0s and 1s, your task is to find the minimum number of swaps required to group all 1s. If there are no 1s in the array, return -1.</span></p>
<p><span style="font-size: 14pt;">A swap is defined as selecting two indices i and j in the array and exchanging the elements at these indices, i.e., performing a swap(arr[i], arr[j]). The goal is to move all 1s into a contiguous subarray with the least number of swaps.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [1, 0, 1, 0, 1]
<strong>Output:</strong> 1
<strong>Explanation: </strong>Only 1 swap is required to group all 1's together. Swapping index 1 and 4 will give arr[] = [1, 1, 1, 0, 0]
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [1, 0, 1, 0, 1, 1] <strong>
Output:</strong> 1</span></pre>
<pre><span style="font-size: 18.6667px;"><strong>Input:</strong> arr[] = [0, 0, 0]</span><br><span style="font-size: 18.6667px;"><strong>Output:</strong> -1<br></span><span style="font-size: 18.6667px;"><strong>Explanation:</strong> No 1s are present in the array, so return -1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>0 ≤ arr[i] ≤ 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;