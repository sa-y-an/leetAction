class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector <int> arr = nums;
        sort(nums.begin(), nums.end());
        int l = 0 , r = nums.size()-1;
        
        while( l < r and nums[l] == arr[l] ) l++;
        while( l < r and nums[r] == arr[r] ) r--;
        
        if( r-l == 0 ) return 0;
        return r-l+1;
    }
    // 0 1 2 3 04 05 06
    // 2 6 4 8 10 09 15 
    // 2 4 6 8 09 10 15
};