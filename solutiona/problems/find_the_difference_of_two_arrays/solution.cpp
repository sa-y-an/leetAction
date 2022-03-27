class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> uset1 , uset2;
        for( auto num : nums1) uset1.insert(num);
        for( auto num: nums2) uset2.insert(num);
        
        vector <unordered_set <int> > ret(2);
        
        for( auto num: nums2){
            if( uset1.count(num) > 0 ) continue;
            ret[0].insert(num);
        }
        
        for( auto num: nums1 ){
            if( uset2.count(num) > 0 ) continue;
            ret[1].insert(num);
        }
        
        vector <vector <int>> ans(2);
        
        for( auto num : ret[0]){
            ans[1].push_back(num);
        }
        
        for( auto num : ret[1]){
            ans[0].push_back(num);
        }
        
        return ans;
        
    }
};