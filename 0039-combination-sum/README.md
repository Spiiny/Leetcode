<h2><a href="https://leetcode.com/problems/combination-sum">39. Combination Sum</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an array of distinct integers <code>candidates</code> and a target integer <code>target</code>, return a list of all unique combinations where the chosen numbers sum to <code>target</code>.</p>

<p>The same number may be selected from <code>candidates</code> an unlimited number of times.</p>

<p>Two combinations are considered unique if the frequency of at least one chosen number differs.</p>

<p>You may return the combinations in any order.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: candidates = [2], target = 1
Output: []
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= candidates.length &lt;= 30</code></li>
<li><code>2 &lt;= candidates[i] &lt;= 40</code></li>
<li>All elements of <code>candidates</code> are distinct.</li>
<li><code>1 &lt;= target &lt;= 40</code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<vector<int>> combinationSum(vector<int>& candidates, int target);
</pre>