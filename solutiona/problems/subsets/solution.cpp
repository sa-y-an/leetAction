class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector <vector<int> > dp;
        dp.push_back({});
        
        for( auto num : nums ){
            
            int n = dp.size();
            
            for( int i = 0 ; i < n ; i++ ){
                auto temp = dp[i];
                temp.push_back(num);
                dp.push_back(temp);
            }
            
        }
        
            
        return dp;
    }
};