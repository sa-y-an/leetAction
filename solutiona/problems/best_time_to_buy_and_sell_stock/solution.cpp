class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int maxProfit = 0;
        int minPrice = prices[0];
        
        for( int price : prices ) {
            
            maxProfit = max( maxProfit, price - minPrice);
            minPrice = min( minPrice, price );
        
        }
        
        return maxProfit;
        
    }
};