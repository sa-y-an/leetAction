class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        unordered_map <int,int> sz;
        
        int i = 0;
        int n = nums.size();
        while( i < n ){
            while( i < n and nums[i] != 0 ){
                i++;
            }
            int cnt = 0;
            while( i < n and nums[i] == 0 ){
                cnt++;
                i++;
            }
            
            if( cnt > 0 )
                sz[cnt]++;
        }
        
        long long ans = 0;
        for( auto &[si,num] : sz){
            long long size = si;
            long long contrib = (size*(size+1)*1LL)/2;
            ans += contrib*num;
        }
        
        return ans;
    }
};