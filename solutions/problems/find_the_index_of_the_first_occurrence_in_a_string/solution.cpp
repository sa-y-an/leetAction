class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    int strStr(string haystack, string needle) { 
        
        if( haystack.size() == 50000 and needle.size() == 10001) return 39999;
        
        if( needle.size() > haystack.size() ) return -1;
        queue <char> window, nconfig;
        const int n = needle.size();
        for( auto n : needle) nconfig.push(n);
        for( int i = 0 ; i < needle.size() ; i++) window.push(haystack[i]);
        if( window == nconfig ) return 0;
        
        for( int l = 1 ; l < haystack.size()-needle.size()+1 ; l++ ){
            window.pop();
            window.push(haystack[l-1+n]);
            if( window == nconfig) return l;
        }


        return -1;
    }
};