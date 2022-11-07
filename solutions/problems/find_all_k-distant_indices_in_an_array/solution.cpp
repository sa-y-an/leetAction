class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        unordered_set <int> keys;
        
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] == key ) keys.insert(i);
        }
        
        set <int> ret;
        for( int i = 0 ; i < nums.size() ; i++){
            
            for( auto j : keys ){
                if( abs(i-j) <= k ){
                    ret.insert(i);
                }
            }
            
        }
        
        vector <int> ans;
        for( auto j : ret){
            ans.push_back(j);
        }
        
        return ans;
    }
};