class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort( intervals.begin() , intervals.end());        
        int i = 0, n = intervals.size();
        vector <vector <int>> ret;
        while( i < n ){
            int start = intervals[i][0];
            int end = intervals[i][1];
            
            while( i+1 <n and end >= intervals[i+1][0]){
                i++;
                end = max(end,intervals[i][1]);
            }
            
            ret.push_back({start,end});
            
            i++;
        }
        
        return ret;
    }
};