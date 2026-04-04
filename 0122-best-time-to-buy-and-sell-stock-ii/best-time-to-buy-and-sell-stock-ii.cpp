class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,total=0,sum=0;
        int n = prices.size();
        if(n<=1) return 0;
        for(int j=1;j<n;j++){
            if(prices[j]<prices[j-1]){
                sum = prices[j-1] - prices[i];
                total += sum;
                sum =0;
                i=j;
            }
        }
        if (prices[n - 1] > prices[i]) total += prices[n - 1] - prices[i];
        return total;
    }
}; 
