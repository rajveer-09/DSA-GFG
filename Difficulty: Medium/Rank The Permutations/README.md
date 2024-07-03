<h2><a href="https://www.geeksforgeeks.org/problems/rank-the-permutations2323/1?page=1&category=number-theory&company=Amazon,Microsoft,Flipkart,Adobe,Google,Paytm&sortBy=submissions">Rank The Permutations</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string, <strong>s</strong> find the rank of the string amongst all its permutations sorted lexicographically. The rank can be big, so print it modulo <strong>1000003</strong>.&nbsp;<br><strong>Note:</strong> Return 0 if the characters are repeated in the string.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "abc"
<strong>Output:</strong> 1
<strong>Explaination:</strong> It is lexicographically the smallest 
string of the permutation.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> s = "acb"
<strong>Output:</strong> 2
<strong>Explaination:</strong> This is lexicographically the second smallest string of the permutation.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>rank()</strong> which takes string s as input parameter and returns the rank modulo 1000003 of the string.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(|s|<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong> O(|s|)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |s| ≤ 26&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>FactSet</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>number-theory</code>&nbsp;<code>Combinatorial</code>&nbsp;<code>factorial</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;