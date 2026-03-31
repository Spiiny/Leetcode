<h2><a href="https://leetcode.com/problems/sort-colors">75. Sort Colors</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an array <code>nums</code> with <code>n</code> elements colored red, white, or blue, sort them in-place so that elements of the same color are adjacent, arranged in the order red, white, and blue.</p>

<p>The integers <code>0</code>, <code>1</code>, and <code>2</code> represent the colors red, white, and blue respectively.</p>

<p>You must solve this problem without using the built-in sort function.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [2,0,1]
Output: [0,1,2]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>n == nums.length</code></li>
<li><code>1 &lt;= n &lt;= 300</code></li>
<li><code>nums[i]</code> is either <code>0</code>, <code>1</code>, or <code>2</code></li>
</ul>

<hr>

<p><strong>Follow-up:</strong></p>

<p>Can you solve this problem in one pass using constant extra space?</p>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
void sortColors(vector<int>& nums);
</pre>