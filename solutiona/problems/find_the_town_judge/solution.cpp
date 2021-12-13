class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    
    
    int findJudge(int n, vector<vector<int>>& trust) {       
        
        vector <unordered_set <int> > trustees(n+1);
        
        for( int i = 0 ; i < trust.size() ; i++ ){
            int trustee = trust[i][0], trusted = trust[i][1];
            trustees[trustee].insert(trusted);
        }
        
        
        vector <int> potentialCandidates;
        
        for( int i = 1 ; i < n+1 ; i++ ) {
            if( trustees[i].size() == 0 ) {
                potentialCandidates.push_back(i);
            }
        }
        
        if( potentialCandidates.size() != 1  ) return -1;
        
        int townJudge = potentialCandidates[0];
        
        for( int i = 1 ; i < n+1 ; ++i ) {
            
            if( trustees[i].size() == 0 ) continue;
            
            if( trustees[i].find(townJudge) == trustees[i].end() ) return -1;
            
        }
    
        return townJudge;      
        
    }
};