class Solution {
public:
    
    unordered_map <int,int> fibArr;
    
    int fib(int n) {
        
        
        if ( n == 0 ) {
            return 0;
        }
        if ( n == 1 ) {
            return 1;
        }
        
        if( fibArr.find(n) != fibArr.end() ) return fibArr[n];
        
        else {
            int temp = fib(n-1) + fib(n-2);
            fibArr[n] = temp;
            return temp;
        }
        
    }
};