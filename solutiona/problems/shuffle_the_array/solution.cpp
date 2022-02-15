class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ret(nums.size());
        int l = 0 , r = n;
        for( int i = 0 ; i < 2*n ; i++){
            if( i%2 == 0 ) 
                ret[i] = nums[l], l++;
            else 
                ret[i] = nums[r], r++;
        }
        return ret;
    }
};