<h2><a href="https://leetcode.com/problems/majority-element">169. Majority Element</a></h2>
<h3>Easy</h3>
<hr>

<p>Given an array <code>nums</code> of size <code>n</code>, return the <strong>majority element</strong>.</p>

<p>The majority element is the element that appears more than <code>⌊n / 2⌋</code> times. It is guaranteed that such an element exists in the array.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: nums = [3,2,3]
Output: 3
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: nums = [2,2,1,1,1,2,2]
Output: 2
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>n == nums.length</code></li>
<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
<li>The majority element always exists.</li>
</ul>

<hr>

<p><strong>Follow-up:</strong></p>

<p>Can you solve the problem in linear time and constant space?</p>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
int majorityElement(vector<int>& nums);
</pre>