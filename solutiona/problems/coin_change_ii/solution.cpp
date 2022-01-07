class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int change(int total, vector<int>& coins) {
        
        vector <int> ways(total+1,0);
        ways[0] = 1;
        
        for ( auto coin : coins ) {     
            for(int amount = 1 ; amount <= total ; amount++ ){
                if( amount >= coin ) ways[amount] += ways[amount-coin];
             }
        }
        
        return ways[total];
    }
};