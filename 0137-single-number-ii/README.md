<h2><a href="https://leetcode.com/problems/single-number-ii">137. Single Number II</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an integer array <code>nums</code>, every element appears exactly three times except for one element, which appears only once. Find and return that single element.</p>

<p>Your solution must run in linear time and use only constant extra space.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [2,2,3,2]
Output: 3
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [0,1,0,1,0,1,99]
Output: 99
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
<li>Each element appears exactly three times except one, which appears once.</li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
int singleNumber(vector<int>& nums);
</pre>