class Solution {
public:
    int maxPower(string s) {
        
        int maxCount = 0;
        
        int l = 0, r = 0 ;
        
        while( l < s.size() ){
            
            int currCount = 0;
            
            while( r < s.size() and s[l] == s[r] ) {
                currCount++;
                r++;
            }
            
            maxCount = max( maxCount , currCount);
            
            l = r;
        }
        
        return maxCount;
        
    }
};