<h2><a href="https://leetcode.com/problems/happy-number">202. Happy Number</a></h2>
<h3>Easy</h3>
<hr>

<p>Determine whether a given integer <code>n</code> is a happy number.</p>

<p>A number is considered <strong>happy</strong> if the following process eventually results in <code>1</code>:</p>

<ul>
<li>Start with any positive integer.</li>
<li>Replace the number with the sum of the squares of its digits.</li>
<li>Repeat this process.</li>
<li>If the sequence reaches <code>1</code>, the number is happy.</li>
<li>If the sequence enters a cycle that never reaches <code>1</code>, it is not happy.</li>
</ul>

<p>Return <code>true</code> if <code>n</code> is a happy number, otherwise return <code>false</code>.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: n = 19
Output: true

Explanation:
1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: n = 2
Output: false
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
bool isHappy(int n);
</pre>