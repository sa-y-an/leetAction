class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector <int> ans;
        for( auto num : nums ){
            int idx = lower_bound(ans.begin(),ans.end(), num) - ans.begin();
            if( idx == ans.size() ){
                ans.push_back(num);
            }else{
                ans[idx] = num;
            }
        }
        
        return ans.size();
    }
};