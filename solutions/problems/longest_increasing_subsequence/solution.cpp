const int INF = -1e5;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector <int> ans;
        for( int x : nums){
            auto idx = lower_bound(ans.begin(),ans.end(),x);
            if( idx == ans.end()) ans.push_back(x);
            else {
                int i = idx - ans.begin();
                ans[i] = x;
            }
        }
        return ans.size();
    }
};