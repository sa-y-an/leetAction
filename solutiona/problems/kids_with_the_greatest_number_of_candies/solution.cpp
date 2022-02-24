class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = *max_element(candies.begin(), candies.end());
        vector <bool> ret;
        for( auto candy : candies) ret.push_back((candy+extraCandies >= maxi));
        return ret;
    }
};