class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    
    
    int findCenter(vector<vector<int>>& edges) {
             
        if (edges[0][0] == edges[1][0] ) return edges[1][0];
        if (edges[0][0] == edges[1][1] ) return edges[1][1];
        return edges[0][1];
        
    }
};