<h2><a href="https://leetcode.com/problems/majority-element-ii">229. Majority Element II</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an integer array <code>nums</code> of size <code>n</code>, return all elements that appear more than <code>⌊ n/3 ⌋</code> times.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [3,2,3]
Output: [3]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [1]
Output: [1]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: nums = [1,2]
Output: [1,2]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>4</sup></code></li>
<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<hr>

<p><strong>Follow-up:</strong></p>

<p>Could you solve the problem in linear time and in <code>O(1)</code> space?</p>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<int> majorityElement(vector<int>& nums);
</pre>