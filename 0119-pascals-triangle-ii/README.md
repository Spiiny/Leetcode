<h2><a href="https://leetcode.com/problems/pascals-triangle-ii">119. Pascal's Triangle II</a></h2>
<h3>Easy</h3>
<hr>

<p>Given an integer <code>rowIndex</code>, return the <code>rowIndex<sup>th</sup></code> (0-indexed) row of Pascal's triangle.</p>

<p>In Pascal's triangle, each number is the sum of the two numbers directly above it.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: rowIndex = 3
Output: [1,3,3,1]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: rowIndex = 0
Output: [1]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: rowIndex = 1
Output: [1,1]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>0 &lt;= rowIndex &lt;= 33</code></li>
</ul>

<hr>

<p><strong>Follow-up:</strong></p>

<p>Could you optimize your algorithm to use only <code>O(rowIndex)</code> extra space?</p>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<int> getRow(int rowIndex);
</pre>