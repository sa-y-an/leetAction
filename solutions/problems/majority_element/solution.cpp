class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, credibility = 0;
        for( auto num : nums ){
            if( credibility == 0 ) candidate = num;
            if( num == candidate ) credibility += 1;
            else credibility -= 1;
        }       
        return candidate;
    }
};