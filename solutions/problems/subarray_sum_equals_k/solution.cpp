class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map <int, vector <int>> mpp;
        int prefix[n];
        prefix[0] = nums[0];
        mpp[nums[0]].push_back(0);
        for( int i = 1; i < n ; i++){
            prefix[i] = nums[i] + prefix[i-1];
            mpp[prefix[i]].push_back(i);
        }
        
        int cnt = 0;
        for( int i = 0 ; i < n ; i++){
            int req = k+prefix[i];
            if( prefix[i] == k ) cnt++;
            if( mpp.count(req) == 0 ) continue;
            for( int idx : mpp[req]){
                if( idx > i ) cnt++;
            }
        }
        return cnt;
    }
};