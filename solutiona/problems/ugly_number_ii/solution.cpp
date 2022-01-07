class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    int nthUglyNumber(int n) {        
        
        int two = 0 , three = 0 , five = 0 ;
        vector <int> ugly(n+1,0);
        ugly[0] = 1;
        
        for( int i = 1 ; i <=n ; i++ ){
            
            ugly[i] = min({ugly[two]*2 , ugly[three]*3 , ugly[five]*5 });
            if(ugly[i] == ugly[two]*2 ) two++;
            if(ugly[i] == ugly[three]*3 ) three++;
            if(ugly[i] == ugly[five]*5 ) five++;
            
        }
        
        return ugly[n-1];
        
    }
};