class Solution {
public:
    void moveZeroes(vector<int>& nums, int hole = 0) {
        for( int num : nums ) if( num != 0 ) nums[hole] = num, hole += 1;
        for(int i = hole ; i < nums.size() ; i++) nums[i] = 0;
    }
};