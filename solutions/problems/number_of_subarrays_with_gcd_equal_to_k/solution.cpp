class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        
        int ans = 0, n = nums.size();
        for( int i = 0 ; i < n ; i++){
            int gcd = nums[i];
            if (gcd == k) 
                ans++;
            for( int j = i+1 ; j < n ; j++){
                gcd = __gcd(gcd,nums[j]);
                if(gcd == k )
                    ans++;
            }
        }
        return ans;
    }
};