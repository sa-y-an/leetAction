bool comparator(vector <int> &a , vector <int> &b ){
    return a.size() < b.size();
}

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        sort(nums.begin(), nums.end(), comparator);
        
        unordered_set <int> common(nums[0].begin(), nums[0].end());
        
        
        int n = nums.size();
        
        for( int i = 1 ; i < n ; i++){
            // cout<<i<<" ";
            unordered_set <int> hash(nums[i].begin(), nums[i].end());
            unordered_set <int> to_erase;
            for( auto num : common ){
                if( hash.count(num) > 0 ) continue;
                else to_erase.insert(num);
            }
            
            for( auto num : to_erase ) common.erase(num);
            if( common.size() < 1 ) return {};
        }
        
        vector <int> ans;
        
        for(auto num : common ) ans.push_back(num);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};