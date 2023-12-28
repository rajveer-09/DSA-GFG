<h2><a href="https://practice.geeksforgeeks.org/problems/demonitisation0013/1?page=2&category=Strings&sortBy=difficulty">Demonitisation</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given 3 Strings S, M and N. Your task is to remove occurences of M and N completely from the given string S. After removing every occurence of M and N from the string S, if S becomes empty, then return -1.<br><br><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
<strong>S = </strong>abc
<strong>m = </strong>ab
<strong>n = </strong>bc
<strong>Output:</strong>
-1
<strong>Explanation: </strong>When we remove the two strings,
we get an empty string and thus the Output -1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
<strong>S = </strong> abbbccab 
<strong>m = </strong>ab
<strong>n = </strong>bcc
<strong>Output:</strong>
b
<strong>Explanation: </strong>There are two instance of the String
"ab" in S and one occurence of "bcc". Removing
these from S we get "b".</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 3:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
<strong>S = </strong> geeksforgks
<strong>m = </strong>for
<strong>n = </strong>gks
<strong>Output:</strong>
geeks
<strong>Explanation: </strong>After removing m and n from the String
S we get "geeks".
</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>demonitize</strong><strong>()</strong> which takes Strings S , m and n as input and returns the answer.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(|S|<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong> O(|S|)</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |S| &lt;= 1000<br>1 &lt;= |n| , |m| &lt;= |S|</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;