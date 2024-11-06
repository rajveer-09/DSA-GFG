<h2><a href="https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab">String Rotated by 2 Places</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two strings <strong>s1 </strong>and <strong>s2</strong>. Return true if the string <strong>s2</strong> can be obtained by rotating</span><span style="font-size: 18px;">&nbsp;</span><span style="font-size: 18px;">(<strong>in any direction</strong>)</span><span style="font-size: 18px;"> </span><span style="font-size: 18px;">string <strong>s1</strong> by </span><strong style="font-size: 18px;">exactly 2</strong><span style="font-size: 18px;"> places, otherwise, false.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s1 = "amazon", s2 = "azonam"
<strong>Output: </strong>true<strong>
Explanation: "</strong>amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s1 = "geeksforgeeks", s2 = "geeksgeeksfor"
<strong>Output: </strong>false<strong>
Explanation: </strong>If we rotate "geeksforgeeks" by two place in any direction, we won't get "geeksgeeksfor".<br></span></pre>
<pre><strong>Input: </strong>s1 = "ab", s2 = "ab"
<strong>Output: </strong>false</pre>
<p><span style="font-size: 18px;"><strong>Challenge: </strong>Try doing it in O(1) space complexity</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ s1.length, s2.length ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;