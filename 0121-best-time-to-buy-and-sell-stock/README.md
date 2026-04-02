<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock">121. Best Time to Buy and Sell Stock</a></h2>
<h3>Easy</h3>
<hr>

<p>You are given an array <code>prices</code> where <code>prices[i]</code> represents the price of a stock on the <code>i</code>-th day.</p>

<p>Your goal is to maximize profit by choosing a single day to buy one stock and a different day in the future to sell it.</p>

<p>Return the maximum profit you can achieve. If no profit is possible, return <code>0</code>.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: prices = [7,1,5,3,6,4]
Output: 5

Explanation:
Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 5.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: prices = [7,6,4,3,1]
Output: 0

Explanation:
No profitable transaction can be made.
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= prices.length &lt;= 10<sup>5</sup></code></li>
<li><code>0 &lt;= prices[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
int maxProfit(vector<int>& prices);
</pre>