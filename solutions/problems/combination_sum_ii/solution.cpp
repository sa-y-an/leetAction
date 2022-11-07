class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    vector < vector <int> > ret;
    
    void dfs( vector<int>& candidates, int target, int idx,vector <int> chosen = {}) {
        
        if( target == 0 ) {   
            if( ret.size() != 0 and chosen == ret.back() ) return ;
            ret.push_back(chosen);
            return;
        }
        if( target < 0 or idx < 0 ) return ;
        
        if( target-candidates[idx] >= 0 ){
            chosen.push_back(candidates[idx]);
            dfs(candidates,target-candidates[idx], idx-1 , chosen);
            chosen.pop_back();            
        }
        
        while( idx >= 1 and candidates[idx] == candidates[idx-1]) idx--;
        dfs(candidates,target, idx-1,chosen);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, candidates.size()-1);        
        return ret;
    }
};