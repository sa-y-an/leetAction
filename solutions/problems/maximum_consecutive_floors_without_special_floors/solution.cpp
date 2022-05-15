class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort( special.begin(), special.end());
        int cnt = 0;
        
        cnt = max( cnt, special[0]-bottom);
        int n = special.size();
        for( int i = 1 ; i < n ; i++) 
            cnt = max(cnt, special[i]-special[i-1]-1);
        
        cnt = max( cnt, top - special[n-1]);
        return cnt;
    }
};