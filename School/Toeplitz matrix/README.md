<h2><a href="https://practice.geeksforgeeks.org/problems/toeplitz-matrix/1?page=1&category=Matrix&sortBy=difficulty">Toeplitz matrix</a></h2><h3>Difficulty Level : School</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A Toeplitz (or diagonal-constant) matrix is a matrix in which each descending&nbsp;diagonal from left to right&nbsp;is constant, i.e., all elements in a diagonal are same.<br>
Given a matrix A&nbsp;of order N X M your task is to complete the function <strong>isToeplitz</strong> which returns true&nbsp;if the matrix is Toeplitz otherwise returns false.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 3 3 6 7 8 4 6 7 1 4 6 </span>
<span style="font-size:18px"><strong>Output: </strong>1</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">The test case represents a 3x3 matrix which looks like </span>
<span style="font-size:18px"> 6 7 8 </span>
<span style="font-size:18px"> 4 6 7 </span>
<span style="font-size:18px"> 1 4 6</span>
<span style="font-size:18px">Output: 1(True) as values in all diagonals are same.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">2 3
1 2 3 4 5 6</span>
<strong><span style="font-size:18px">Output: </span></strong><span style="font-size:18px">0</span>
<span style="font-size:18px"><strong>Explanation: </strong></span>
<span style="font-size:18px">Matrix of order 2x3 will be 
     1 2 3
     4 5 6
Output: 0(False) as values in all diagonals 
are not same.
</span></pre>

<p><strong><span style="font-size:18px">Your task:&nbsp;</span></strong><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>isToepliz()&nbsp;</strong>which takes the matrix&nbsp;and size of matrix as&nbsp;input parameters and returns 1 if the matrix is a Toepliz matrix , otherwise return 0.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong> </span></p>

<p><span style="font-size:18px">1&lt;=N,M&lt;=40 </span></p>

<p><span style="font-size:18px">1&lt;=A[i][j]&lt;=100</span></p>

<p><span style="font-size:18px">1&lt;=i&lt;=N,1&lt;=j&lt;=M</span></p>

<p><span style="font-size:18px"><strong>Expected time complexity:</strong>O(nxn</span><span style="font-size:18px">)</span></p>

<p><span style="font-size:18px"><strong>Expected space complexity:</strong>O(1)</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;