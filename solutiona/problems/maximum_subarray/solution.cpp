class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int a = 0;
        for( int x : nums ){
            a += x;
            ans = max(a,ans);
            a = max(a,0);
        }
        return ans;
    }
};