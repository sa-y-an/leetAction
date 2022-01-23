class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map <int,int> lonely;
        
        for( auto num:nums) lonely[num]++;
        
        
        
        vector <int> ret;
        
        for(auto it: lonely) {
            
            if (it.second == 1 and 
               lonely.find(it.first - 1) == lonely.end() and 
               lonely.find(it.first + 1) == lonely.end()) {
                ret.push_back(it.first); 
            }
        }
        
        return ret;
    }
};