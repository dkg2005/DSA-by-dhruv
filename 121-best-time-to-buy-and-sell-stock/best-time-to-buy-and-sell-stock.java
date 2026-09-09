class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;

        int minPrice = Integer.MAX_VALUE;
        int profit = 0;

        for(int i=0; i<n; i++){
            minPrice = Math.min(minPrice, prices[i]);
            int currProfit = prices[i] - minPrice;
            profit = Math.max(profit, currProfit);
        }        
        return profit;
    }
}