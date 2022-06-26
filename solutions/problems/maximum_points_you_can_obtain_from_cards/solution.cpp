class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        vector <int> prefix(n,0), suffix(n,0);
        
        prefix[0] = cardPoints[0];
        for( int i = 1 ; i < n ; i++){
            prefix[i] = cardPoints[i] + prefix[i-1];
        }
        
        suffix[n-1] = cardPoints[n-1];
        for( int i = n-2 ; i >= 0 ; i--){
            suffix[i] = cardPoints[i] + suffix[i+1];
        }
        
        int ans = 0;
        for( int i = -1 ; i < k ; i++){
            int p = i, s = i+ n-k +1 ;
            int curr = 0;
            if( p != -1 ) curr += prefix[p];
            if( s != n ) curr += suffix[s];
            ans = max(ans, curr);
        }
        return ans;
    }
};