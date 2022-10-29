class Solution {
public:
    string oddString(vector<string>& words) {
        
        int n = words[0].size();
        int m = words.size();
        vector <int> diff(n-1,0);
        for( int i = 0 ; i < n-1 ; i++) 
            diff[i] = words[0][i+1]-words[0][i];
        vector<int> idx(m,0);
        
        for( int i = 1 ; i < words.size() ; i++){
            vector<int> curr(n-1,0);
            for( int j = 0 ; j < n-1 ; j++) curr[j] = words[i][j+1] - words[i][j];
            idx[i] = (int) (curr == diff);
        }
                
        int k = accumulate(idx.begin(), idx.end(), 0);
        if ( k == 0 ) return words[0];
        
        for( int i = 1; i < m ; i++){
            if( idx[i] == 0 )
                return words[i];
        }
            
        return words[0];
        
    }
};