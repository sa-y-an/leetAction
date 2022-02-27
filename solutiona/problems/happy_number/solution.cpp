class Solution {
public:
    
    unordered_set <int> uset;
    
    bool isHappy(int n) {
        
        while( n ){   
            int sqSum = 0;
            while( n ){
                sqSum += (n%10)*(n%10);
                n/= 10;
            }
            
            if( sqSum == 1 ) return true;
            n = sqSum;
            
            if( uset.find(n) != uset.end() ) return false;
            uset.insert(n);
        }
        
        return false;
        
    }
};