class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set <int> uset;
        
        for( auto val : nums ) {
            uset.insert(val);
        }
        
        int max_elt =  *max_element(nums.begin() , nums.end());
        
        if( max_elt < 1 ) return 1;
        
        int i = 1;
        while( i <= max_elt ) {
            
            if (uset.find(i) == uset.end() ) return i;
            i++;
            
        }
        
        return max_elt+1;
    }
};