class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts,int m = INT_MIN) {
        for( auto &p : accounts)  m = max(accumulate(p.begin(), p.end(),0), m);
        return m;
    }
};