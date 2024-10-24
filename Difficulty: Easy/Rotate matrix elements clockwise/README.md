<h2><a href="https://www.geeksforgeeks.org/problems/rotate-matrix-elements-clockwise2336/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Rotate matrix elements clockwise</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two integers M, N, and a 2D matrix Mat of dimensions MxN, clockwise rotate the elements in it.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
M=3,N=3
Mat=[[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:</strong>
4 1 2
7 5 3
8 9 6
<strong>Explanation:</strong>
Rotating the matrix clockwise gives this result.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
M=2,N=3
Mat=[[1,2,3],[2,3,3]]
<strong>Output:</strong>
2 1 2
3 3 3
<strong>Explanation:</strong>
Rotating the matrix clockwise gives this result.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>rotateMatrix()</strong> which takes two integers M, N, and a 2D matrix as input parameters and returns the clockwise rotated matrix.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(M*N)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=M,N,Mat[i][j]&lt;=1000</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;