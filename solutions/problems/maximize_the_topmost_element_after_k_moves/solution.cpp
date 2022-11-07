class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        
        const int n = nums.size();
        
        if( n == 1 and k%2 != 0 ) return -1;
        else if( k == 1 ) return nums[1];
        else if( k < n) {
            int maxi = nums[0];
            for( int i = 0 ; i < k-1 ; i++)
                maxi = max(nums[i],maxi);
            maxi = max(nums[k],maxi);
            return maxi;
        }
        else if( k > n ) return *max_element(nums.begin(), nums.end());
        else {
            return *max_element(nums.begin(), nums.end()-1);
        }
        
        
        
    }
};