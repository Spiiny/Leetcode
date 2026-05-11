<h2><a href="https://leetcode.com/problems/isomorphic-strings">205. Isomorphic Strings</a></h2>
<h3>Easy</h3>
<hr>

<p>Given two strings <code>s</code> and <code>t</code>, determine whether they are isomorphic.</p>

<p>Two strings are isomorphic if the characters in <code>s</code> can be replaced to get <code>t</code>.</p>

<p>All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: s = "egg", t = "add"
Output: true
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: s = "foo", t = "bar"
Output: false
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: s = "paper", t = "title"
Output: true
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= s.length &lt;= 5 * 10<sup>4</sup></code></li>
<li><code>t.length == s.length</code></li>
<li><code>s</code> and <code>t</code> consist of any valid ASCII character.</li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
bool isIsomorphic(string s, string t);
</pre>