<h2><a href="https://practice.geeksforgeeks.org/problems/fake-profile3906/1?page=2&category=Strings&sortBy=difficulty">Fake Profile</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There is a hacker named "Vijay" who&nbsp;has developed a method to check whether an id at some social networking site is fake or real using its username.</span></p>

<p><span style="font-size:18px">His method includes: if the number of distinct consonent characters in one's user name is odd, then the user&nbsp;is a male, otherwise&nbsp;a female. You are given the string that denotes the user name, please help Vijay to determine the gender of this user by his method. Ignore the vowels.<br>
Note: The input only contains lowercase English alphabets.</span></p>

<p><strong><span style="font-size:18px">Example 1 -</span></strong></p>

<pre><span style="font-size:18px"><strong>Input</strong>
a = "jpmztf"
<strong>Output</strong>:
SHE!
<strong>Explanation</strong>:
There are 6 distinct consonent characters in "jpmztf".
These characters are: "j", "p", "m", "z", "t", "f".
So jpmztf is a female and you should print "SHE!".</span></pre>

<p><strong><span style="font-size:18px">Example 2 - </span></strong></p>

<pre><span style="font-size:18px"><strong>Input </strong>:
a = "plkaitw"
<strong>Output</strong>:
HE!
<strong>Explanation </strong>: 
There are 5 distinct consonent characters in "plkaitw".
These characters are: "p"," l ","k","t"and"w" as others are vowels.
So plkaitw is a male and you should print "HE!".</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task </strong>:<br>
Complete the function <strong>solve()</strong> that receives the string a and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> :O(|a|)<br>
<strong>Expected Space Complexity</strong> :O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints</strong>:<br>
1&lt;=Length of string&lt;=1000</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;