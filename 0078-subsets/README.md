<h2><a href="https://leetcode.com/problems/subsets">78. Subsets</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an integer array <code>nums</code> of unique elements, return all possible subsets (the power set).</p>

<p>The solution set must not contain duplicate subsets. Return the solution in any order.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [0]
Output: [[],[0]]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 10</code></li>
<li><code>-10 &lt;= nums[i] &lt;= 10</code></li>
<li>All the numbers of <code>nums</code> are unique.</li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<vector<int>> subsets(vector<int>& nums);
</pre>