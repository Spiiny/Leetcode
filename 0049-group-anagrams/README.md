<h2><a href="https://leetcode.com/problems/group-anagrams">49. Group Anagrams</a></h2>
<h3>Medium</h3>
<hr>

<p>Given an array of strings <code>strs</code>, group the anagrams together. You may return the answer in any order.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: strs = [""]
Output: [[""]]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: strs = ["a"]
Output: [["a"]]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= strs.length &lt;= 10<sup>4</sup></code></li>
<li><code>0 &lt;= strs[i].length &lt;= 100</code></li>
<li><code>strs[i]</code> consists of lowercase English letters.</li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<vector<string>> groupAnagrams(vector<string>& strs);
</pre>