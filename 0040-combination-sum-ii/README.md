<h2><a href="https://leetcode.com/problems/combination-sum-ii">40. Combination Sum II</a></h2>
<h3>Medium</h3>
<hr>

<p>Given a collection of candidate numbers <code>candidates</code> and a target value <code>target</code>, return all unique combinations where the chosen numbers sum to <code>target</code>.</p>

<p>Each number in <code>candidates</code> may be used at most once in the combination.</p>

<p>The solution set must not contain duplicate combinations.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: candidates = [2,5,2,1,2], target = 5
Output:
[
[1,2,2],
[5]
]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= candidates.length &lt;= 100</code></li>
<li><code>1 &lt;= candidates[i] &lt;= 50</code></li>
<li><code>1 &lt;= target &lt;= 30</code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
</pre>