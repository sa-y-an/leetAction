class Solution {
public:
    int countAsterisks(string s) {
        
        bool stop = false;
        int ans = 0;
        for( char ch : s ){
            
            if( ch == '|') 
                stop = !stop;
            
            if( ch == '*' and stop == false)
                ans++;
            
        }
        
        return ans;
        
    }
};