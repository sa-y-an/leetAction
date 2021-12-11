class Solution {
public:
    
    bool pchecker(string str) {    
        if( str.size() < 2 ) return true;
        int l = 0 , r = str.size()-1;
        while( l < r ) {           
            if( str[l] != str[r] ) return false;
            l++;
            r--;
        }
        return true;
    }
    
    
    bool isPalindrome(string s) {
     
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
      
        string str;
        
        for( auto i : s ) {        
            i = tolower(i);       
            int temp = i;
            if( (temp > 96 and temp < 123 ) or (temp > 47 and temp < 58) ) {
                str.push_back(i);
            }
        }       
        return pchecker(str);
    }
};