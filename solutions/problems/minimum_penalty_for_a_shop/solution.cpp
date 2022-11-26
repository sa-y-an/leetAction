const int INF = 1e9+10;
class Solution {
public:
    int bestClosingTime(string customers) {
        
        int n = customers.size();
        vector<int> negatives(n+1, 0);
        vector<int> positives(n+1, 0);
        
        for( int i = n-1 ; i >= 0 ; i--){
            int came = 0;
            if( customers[i] == 'Y')
                came = 1;
            positives[i] = came + positives[i+1];
        }
        
        if( customers[0] == 'N') negatives[0] = 1;
        
        for( int i = 1 ; i < n ; i++){
            int came = 0;
            if( customers[i] == 'N')
                came = 1;
            negatives[i] = came + negatives[i-1];
        }
                
        int ans = -1, minCost = INF;
        for( int i = 0 ; i  < n+1 ; i++){
            int cost = positives[i];
            if( i > 0)
                cost += negatives[i-1];
            if( minCost > cost ){
                minCost = cost;
                ans = i;
            }
        }
        
        return ans;
    }
};