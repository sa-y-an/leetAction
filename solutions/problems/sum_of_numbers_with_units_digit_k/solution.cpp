class Solution {
public:
    int minimumNumbers(int num, int k) {
        if( !num )
            return 0;
        if( (k%2 == 0 and num%2 != 0) or num < k )
            return -1;
             
        vector <int> possiblity;        
        for( int i = 1 ; i <= 10 ; i++){
            int currNum = k*i;
            possiblity.push_back(currNum%10);
        }
        
        int ans = find(possiblity.begin(), possiblity.end(), num%10) - possiblity.begin();
        if( ans == possiblity.size() )
            return -1;
        else
            ans += 1;
        
        if( k*ans > num )
            return -1;
        
        return ans;
    }
};