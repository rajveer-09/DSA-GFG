<h2><a href="https://practice.geeksforgeeks.org/problems/triangle-shrinking-downwards0459/1?page=1&category=Strings&sortBy=difficulty">Triangle shrinking downwards</a></h2><h3>Difficulty Level : School</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string of a constant length, print&nbsp;a triangle out of it. The triangle should start with the given&nbsp;string and keeps shrinking&nbsp;downwards by removing&nbsp;one character from the begining of the string. The spaces on the left side of the triangle should be replaced with dot character.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>S = </strong>Geeks</span>
<span style="font-size:18px"><strong>Output:</strong>
Geeks
.eeks
..eks
...ks
....s
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>S = </strong></span><span style="font-size:18px">@io30</span> 
<span style="font-size:18px"><strong>Output:</strong>
</span> <span style="font-size:18px">@io30
.io30
..o30
...30
....0</span> </pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>triDownwards()</strong> which takes a String S and returns a string formed by joining all the lines together. For the Input "GEEKS" you should return the String "GEEKS.EEKS..EKS...KS....S".</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|S|<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(|S|)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S| &lt;=100</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>pattern-printing</code>&nbsp;<code>Data Structures</code>&nbsp;