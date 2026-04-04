<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii">122. Best Time to Buy and Sell Stock II</a></h2>
<h3>Medium</h3>
<hr>

<p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a stock on the <code>i</code>-th day.</p>

<p>On each day, you may decide to buy and/or sell the stock. You can hold at most one share of the stock at any time. However, you are allowed to buy and sell on the same day.</p>

<p>Return the maximum profit you can achieve.</p>

<hr>

<p><strong>Example 1:</strong></p>

<pre>
Input: prices = [7,1,5,3,6,4]
Output: 7

Explanation:
Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 3.
Total profit = 7.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
Input: prices = [1,2,3,4,5]
Output: 4
</pre>

<p><strong>Example 3:</strong></p>

<pre>
Input: prices = [7,6,4,3,1]
Output: 0
</pre>

<hr>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= prices.length &lt;= 3 * 10<sup>4</sup></code></li>
<li><code>0 &lt;= prices[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<hr>

<p><strong>Function Signature:</strong></p>

<pre>
int maxProfit(vector<int>& prices);
</pre>