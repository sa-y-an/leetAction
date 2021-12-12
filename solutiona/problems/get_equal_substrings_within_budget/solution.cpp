class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0); 
    
        int i=0 , l = 0 , r = 0 , maxCount = 0 , currCount = 0 , currSum = 0 ;
        
        while( r < t.size() ){
            
            currSum +=  abs(s[i] - t[i]);
            currCount++;      
            
            if( currSum <= maxCost ) {
                maxCount = max(maxCount, currCount);
                r++;
                i++;
                continue;
            }
            
            while( l <= r and currSum > maxCost ) {
                currCount--;
                currSum -= abs(s[l] - t[l]);
                l++; 
            }
     
            r++;
            i++;
        }
        
       return maxCount; 
    }
};