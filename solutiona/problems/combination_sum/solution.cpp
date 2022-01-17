class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    vector < vector <int> > ret;
    
    void dfs( vector<int>& candidates, int target, int idx,vector <int> chosen = {}) {
        
        if( target == 0 ){            
            ret.push_back(chosen);
            return;
        }
        if( target < 0 or idx < 0 ) return ;
        
        if(target-candidates[idx] >=0  ){
            chosen.push_back(candidates[idx]);
            dfs(candidates,target-candidates[idx], idx , chosen);
            chosen.pop_back();            
        }

        
        dfs(candidates,target, idx-1,chosen);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        dfs(candidates, target, candidates.size()-1);        
        return ret;
    }
};