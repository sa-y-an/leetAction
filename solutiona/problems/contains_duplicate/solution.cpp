class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        unordered_set <int> uset;
        
        for( auto num : nums ) {

            if( uset.find(num) != uset.end()) return true;
            uset.insert(num);
        }
        
        return false;
    }
};