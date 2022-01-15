class Solution {
public:
    bool checkZeroOnes(string s) {
        int ones = 0 , zeros = 0;
        
        int r = 0 ;
        
        while( r < s.size()){
            
            int cnt = 0 ;
            while( r < s.size() and s[r] == '0' ) {
                cnt++;
                r++;
            }
            
            zeros = max(zeros,cnt);
            
            cnt = 0 ;
            
            while( r < s.size() and s[r] == '1' ){
                cnt++;
                r++;
            }
            
            ones = max(ones,cnt);
            
            
        }
        
        return ones > zeros;
        
    }
};