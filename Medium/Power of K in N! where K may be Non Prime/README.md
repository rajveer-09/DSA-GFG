<h2><a href="https://practice.geeksforgeeks.org/problems/power-of-k-in-n-where-k-may-be-non-prime4206/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab">Power of K in N! where K may be Non Prime</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Find the power of K in the factorial of&nbsp;N.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: N = 7, K = 2
<strong>Output:</strong>&nbsp;4
<strong>Explanation</strong>: 7! = 5040
The largest power of 2 that
divides 5040 is 2<sup>4</sup>.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 10, K = 9
<strong>Output:&nbsp;</strong>2
<strong>Explanation</strong>: The largest power of 9 that
divides 10! is 9<sup>2.</sup></span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>largestPowerOfK()&nbsp;</strong>which takes N&nbsp;and K&nbsp;as input parameter and returns the power of K in the factorial of&nbsp;N.<br>
<br>
<strong>Expected Time Complexity:</strong> O(nlogn)<br>
<strong>Expected Auxiliary Space:</strong> O(n)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;=10<sup>5</sup><br>
1 &lt;= K&nbsp;&lt;=100</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>number-theory</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;