class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        sort(cost.begin(),cost.end(),greater<int>());
        
        int totalCost=0;
        
        for( int i=0 ; i < cost.size() ; i++ ){
            if( (i+1)%3 != 0 ) totalCost += cost[i];
        }
        
        return totalCost;
        
    }
};