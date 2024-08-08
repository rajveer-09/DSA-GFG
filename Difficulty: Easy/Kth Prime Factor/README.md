<h2><a href="https://www.geeksforgeeks.org/problems/kth-prime-factor-of-a-number0132/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Kth Prime Factor</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two numbers<strong> n</strong> and <strong>k</strong>, find the k<sup>th</sup> prime factor&nbsp;of n.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 225, k = 2
<strong>Output:</strong> 3
<strong>Explaination:</strong> The prime factors 3, 3, 5 
and 5. So 3 is the 2nd one.</span></pre>

<p><br>
<strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 81, k = 5
<strong>Output:</strong> -1
<strong>Explaination:</strong> The 4 prime factors are 
3, 3, 3, 3. So there is no 5th one.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>kthPrime()</strong> which takes the value n and k as input parameters and return&nbsp;the kth prime number. If k is greater than total number of primes then&nbsp;return -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(n*log(log n))<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n ≤ 10<sup>4</sup><br>
1 ≤ k ≤ 50</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Prime Number</code>&nbsp;<code>sieve</code>&nbsp;<code>factorial</code>&nbsp;<code>Algorithms</code>&nbsp;