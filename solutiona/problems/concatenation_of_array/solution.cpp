class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ret;
        int t = 2;
        while( t-- )
            for( auto num : nums ) ret.push_back(num);
        
        return ret;
    }
};