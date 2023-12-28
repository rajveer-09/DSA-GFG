<h2><a href="https://practice.geeksforgeeks.org/problems/tiger-zinda-hai5531/1?page=5&category=Arrays&sortBy=difficulty">Tiger Zinda Hai</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Rohan is downloading the movie Tiger Zinda Hai using a torrent website, but he is new to torrent, so he doesn't know the difference between a fake download button and a real download button; therefore, he keeps pressing every button in excitement.<br>
Now he has clicked N &nbsp;buttons, and many tabs are opened, if an opened tab is clicked again then it closes it.&nbsp;<br>
Your task is to tell how many tabs are open at the end.</span></p>

<p><span style="font-size:20px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input :</strong> Arr[] = {"</span><span style="font-size:18px">1", "2", "1", "END", "2"</span><span style="font-size:20px">}
<strong>Output :</strong> 1
<strong>Explanation:
</strong>In the above test case, firstly tab 
1st is opened then 2nd is opened then 
1st is closed then all are closed
then again 2nd is opened.

</span></pre>

<p><span style="font-size:20px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input :</strong> Arr[] = {"1", "2", "END"}
<strong>Output :</strong> 0

</span></pre>

<p><span style="font-size:20px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>count_tabs()</strong> that takes an array of String&nbsp;<strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return how many tabs are open at the end. The driver code takes care of the printing.</span></p>

<p><span style="font-size:20px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span><br>
&nbsp;</p>

<p><span style="font-size:20px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:20px">1 ≤ N ≤ 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;