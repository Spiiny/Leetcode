<h2><a href="https://leetcode.com/problems/contains-duplicate-ii">219. Contains Duplicate II</a></h2>
<h3>Easy</h3>
<hr>

<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <code>true</code> if there exist two distinct indices <code>i</code> and <code>j</code> such that <code>nums[i] == nums[j]</code> and the absolute difference between <code>i</code> and <code>j</code> is at most <code>k</code>.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [1,2,3,1], k = 3
Output: true
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [1,0,1,1], k = 1
Output: true
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
<li><code>0 &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
bool containsNearbyDuplicate(vector<int>& nums, int k);
</pre>