<h2><a href="https://www.geeksforgeeks.org/problems/check-binary-string0402/1?page=2&category=Strings&difficulty=Basic,Easy,Medium&sortBy=difficulty">Check Binary String</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary string&nbsp;<strong>S</strong> of 0 and 1,&nbsp;check if&nbsp;the given string is valid or not. The given string is valid when there is no zero is present in between 1s.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "100"
<strong>Output:</strong> VALID
<strong>Explanation</strong>: <strong>1</strong>00. The string have just a
single 1, hence it is valid.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "1110001"
<strong>Output:</strong> INVALID
<strong>Explanation</strong>: <strong>111</strong>000<strong>1</strong>. There are 3 zeros
between the 3rd and the 4th ones. Hence,
it's an invalid string.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything, Your task is to complete the function&nbsp;<strong>checkBinary()&nbsp;</strong>which takes a binary string as input are <strong>returns</strong> true if the string is valid. Else, it <strong>returns</strong> false.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=length(S)&lt;=10<sup>5&nbsp;</sup></span></p>

<p>&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Binary Representation</code>&nbsp;<code>Data Structures</code>&nbsp;