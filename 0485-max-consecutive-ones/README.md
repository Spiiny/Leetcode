<h2><a href="https://leetcode.com/problems/max-consecutive-ones">485. Max Consecutive Ones</a></h2>
<h3>Easy</h3>
<hr>

<p>Given a binary array <code>nums</code>, return the maximum number of consecutive <code>1</code>s in the array.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [1,1,0,1,1,1]
Output: 3

Explanation:
The first two or the last three digits are consecutive 1s.
The maximum number of consecutive 1s is 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [1,0,1,1,0,1]
Output: 2
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
<li><code>nums[i]</code> is either <code>0</code> or <code>1</code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
int findMaxConsecutiveOnes(vector<int>& nums);
</pre>