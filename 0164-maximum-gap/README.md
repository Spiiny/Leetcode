<h2><a href="https://leetcode.com/problems/maximum-gap">164. Maximum Gap</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an integer array <code>nums</code>, return the maximum difference between two successive elements in its sorted form. If the array contains fewer than two elements, return <code>0</code>.</p>

<p>You must write an algorithm that runs in linear time and uses linear extra space.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [3,6,9,1]
Output: 3

Explanation:
The sorted array is [1,3,6,9].
The maximum difference between successive elements is 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [10]
Output: 0

Explanation:
The array contains fewer than two elements.
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
int maximumGap(vector<int>& nums);
</pre>