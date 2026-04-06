<h2><a href="https://leetcode.com/problems/ugly-number">263. Ugly Number</a></h2>
<h3>Easy</h3>
<hr>

<p>An <strong>ugly number</strong> is a positive integer whose prime factors are limited to 2, 3, and 5.</p>

<p>Given an integer <code>n</code>, return <code>true</code> if <code>n</code> is an ugly number, otherwise return <code>false</code>.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: n = 6
Output: true

Explanation:
6 = 2 × 3
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: n = 1
Output: true

Explanation:
1 has no prime factors.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: n = 14
Output: false

Explanation:
14 includes prime factor 7.
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
bool isUgly(int n);
</pre>