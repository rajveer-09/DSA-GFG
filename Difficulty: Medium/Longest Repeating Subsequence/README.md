<h2><a href="https://www.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1">Longest Repeating Subsequence</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given string str, find the length of the longest repeating subsequence such that it can be found twice in the given string. </span></p>
<p><span style="font-size: 18px;">The two identified subsequences A and B can use the same ith character from string <strong>s</strong> if and only if that ith character has different indices in A and B. For example, A = "xax" and B = "xax" then the index of the first "x" must be different in the original string for A and B.</span></p>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "axxzxy"
<strong>Output:</strong> 2
<strong>Explanation: </strong>The given array with indexes looks like
a x x z x y 
0 1 2 3 4 5</span>
<span style="font-size: 18px;">The longest subsequence is "xx". It appears twice as explained below.</span>
<span style="font-size: 18px;"><strong>subsequence A</strong>
x x
0 1  &lt;-- index of subsequence A
------
1 2  &lt;-- index of s</span>
<span style="font-size: 18px;"><strong>subsequence B</strong>
x x
0 1  &lt;-- index of subsequence B
------
2 4  &lt;-- index of s</span>
<span style="font-size: 18px;">We are able to use character 'x' (at index 2 in s) in both subsequences as it appears on index 1 in subsequence A and index 0 in subsequence B.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "axxxy"
<strong>Output:</strong> 2
<strong>Explanation: </strong>The given array with indexes looks like
a x x x y&nbsp;
0 1 2 3 4
The longest subsequence is "xx". It appears twice as explained below.
<strong>subsequence A</strong>
x x
0 1 &nbsp;&lt;-- index of subsequence A
------
1 2 &nbsp;&lt;-- index of s
<strong>subsequence B</strong>
x x
0 1 &nbsp;&lt;-- index of subsequence B
------
2 3 &nbsp;&lt;-- index of s
We are able to use character 'x' (at index 2 in s) in both subsequencesas it appears on index 1 in subsequence A and index 0 in subsequence B.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= s.size() &lt;= 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;