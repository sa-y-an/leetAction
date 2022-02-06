class Solution {
public:
    int removeDuplicates(vector<int>& nums) {        
        int hole = 0 ;
        for( auto num : nums ){
            if( hole < 2 or num > nums[hole-2] )
                nums[hole++] = num;
        }
        return hole;
    }
};