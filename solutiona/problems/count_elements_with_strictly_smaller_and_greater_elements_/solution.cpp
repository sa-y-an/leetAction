class Solution {
public:
    int countElements(vector<int>& nums) {

        int cnt = count(nums.begin(),nums.end(),*max_element(nums.begin(),nums.end())) + 
            count(nums.begin(),nums.end(),*min_element(nums.begin(), nums.end()));
        
        int ret = nums.size() -cnt;
        
        if( ret >= 0 ) return ret;
        
        
        return 0;
    }
};