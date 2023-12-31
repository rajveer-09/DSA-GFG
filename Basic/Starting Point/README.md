<h2><a href="https://practice.geeksforgeeks.org/problems/starting-point0909/1?page=1&category=Matrix&difficulty=Basic&sortBy=submissions">Starting Point</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are a traveler, lost in a jungle. <strong>Backtrack your steps and find the starting point. </strong></span></p>

<p><span style="font-size:18px">Currently, you are at coordinates (x,y). You are also given an array <strong>pathCoordinates [ ] </strong>where&nbsp;each element is a&nbsp;(a,b)&nbsp;pair. </span></p>

<blockquote>
<p><span style="font-size:18px">The <strong>i<sup>th</sup></strong>&nbsp;pair&nbsp;(a,b), in the array, denotes&nbsp;that in the i<sup>th</sup> move you moved your X co-ordinate by a and Y co-ordinate by b.&nbsp;<br>
if X,Y coordinates in an instant are (c,d)&nbsp;then your next move will be to&nbsp;(&nbsp;c+a,&nbsp;d+b).&nbsp;</span></p>
</blockquote>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>x = 2, y = 2, 
pathCoordinates = {{1,0},{0,1},{1,1}}
<strong>Output: </strong>{0,0}
<strong>Explaination:</strong>
{0,0} was the starting point of the traveler.
At first he changed his X co-ordinate by 1 and
Y co-ordinate by 0.
{0,0} -&gt; {1,0}
After that he changed his X co-ordinate by 0 and
Y co-ordinate by 1.
{0,0} -&gt; {1,0} -&gt; {1,1}
And finally, he changed his X co-ordinate by 1 and
Y co-ordinate by 1.
{0,0} -&gt; {1,0} -&gt; {1,1} -&gt; {2,2}
</span>

</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>x = 1, y = 2,
pathCoordinates = {{1,1}}
<strong>Output: </strong>{0,1}
<strong>Explaination:</strong>
The route followed by the traveller is
{0,1} -&gt; {1,2}.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>findStartingPoint()&nbsp;</strong>which takes x, y, and pathCoordinates as input parameters and returns a list containing the starting point.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Compelxity:&nbsp;</strong>O(n) where n = length of pathCoordinates.<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10<sup>3</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;