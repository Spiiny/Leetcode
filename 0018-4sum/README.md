<h2><a href="https://leetcode.com/problems/4sum">18. 4Sum</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an array <code>nums</code> of <code>n</code> integers, return all unique quadruplets <code>[nums[a], nums[b], nums[c], nums[d]]</code> such that:</p>

<ul>
<li><code>0 &lt;= a, b, c, d &lt; n</code></li>
<li><code>a, b, c, d</code> are distinct</li>
<li><code>nums[a] + nums[b] + nums[c] + nums[d] == target</code></li>
</ul>

<p>You may return the answer in any order.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 200</code></li>
<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<vector<int>> fourSum(vector<int>& nums, int target);
</pre>