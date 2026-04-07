<h2><a href="https://leetcode.com/problems/fizz-buzz">412. Fizz Buzz</a></h2>
<h3>Easy</h3>
<hr>

<p>Given an integer <code>n</code>, return a string array <code>answer</code> (1-indexed) where:</p>

<ul>
<li><code>answer[i] == "FizzBuzz"</code> if <code>i</code> is divisible by both 3 and 5.</li>
<li><code>answer[i] == "Fizz"</code> if <code>i</code> is divisible by 3.</li>
<li><code>answer[i] == "Buzz"</code> if <code>i</code> is divisible by 5.</li>
<li><code>answer[i] == i</code> (as a string) if none of the above conditions apply.</li>
</ul>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: n = 3
Output: ["1","2","Fizz"]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
vector<string> fizzBuzz(int n);
</pre>