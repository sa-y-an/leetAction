class Solution {
public:
    
    void ifPossible(vector<vector<int>> &com, vector<int> &candidates, int target, int idx, vector <int> chosen = {} ){
        
        if(target == 0) {
            com.push_back(chosen);
            return;
        }
      
        if( target - candidates[idx] >= 0 ){
            chosen.push_back(candidates[idx]);
            ifPossible(com,candidates,target-candidates[idx],idx,chosen);
            chosen.pop_back();
        }
        
        if( idx >= 1 ) {
            ifPossible(com,candidates,target,idx-1,chosen);
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector <int>> ret;
        ifPossible(ret,candidates,target,candidates.size()-1);
        return ret;
    }
};