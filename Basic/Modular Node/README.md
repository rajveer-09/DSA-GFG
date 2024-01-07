<h2><a href="https://www.geeksforgeeks.org/problems/modular-node/1?page=1&category=Linked%20List&sortBy=difficulty">Modular Node</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list and a number <strong>k</strong>, you&nbsp;are required to complete the function <strong>modularNode()&nbsp;</strong>which&nbsp;returns the modular node of the linked list.<br>
A modular node is the last node of the linked list whose<strong> Index</strong> is divisible by the number <strong>k</strong>, i.e. <strong>i%k==0</strong>.<br>
<strong>Note:</strong> If no such node is available, return&nbsp;<strong>-1</strong>. We are following 1 indexing.</span></p>

<p><span style="font-size:20px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong><strong> </strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6-&gt;7
&nbsp;      k = 3
<strong>Output: </strong>6
<strong>Explanation:</strong> Indexing of the linked list is
same as the values of the Node. The maximum
index is which is divisble by 3 is 6 and the
node value of the 6th index is 6.</span>
</pre>

<p><span style="font-size:20px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong><strong> </strong>LinkedList: 19-&gt;28-&gt;37-&gt;46-&gt;55<strong>
           </strong>k = 2<strong>
Output: </strong>46<strong>
Explanation:</strong> Index start from 1 and end at 5.
The maximum Index which is divisble by 2 is 4
and 4th Node in the list is 46.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to read input or print anything. Complete the function modularNode() which takes the head Node and integer k&nbsp;as input parameters and returns the modular Node, if exists,<strong> -1 otherwise</strong>.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 100<br>
1 &lt;= N &lt;= 500</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Modular Arithmetic</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;