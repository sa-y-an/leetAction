bool comparator( vector <int> &a, vector<int> &b){
    if(a[0] != b[0] ) return a[0] < b[0];
    return a[1] > b[1];
}

class Solution {
public:   
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {       
        sort(intervals.begin(), intervals.end(), comparator);
        int l = intervals[0][0], r = intervals[0][1];
        int cnt = 0;
        
        for( int i = 1 ; i < intervals.size() ; i++){  
            if( l  <= intervals[i][0]  and intervals[i][1] <= r) cnt++;
            else l = intervals[i][0], r = intervals[i][1];
        }
        
        return intervals.size()-cnt;
    }
};
