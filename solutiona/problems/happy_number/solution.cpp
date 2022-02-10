class Solution {
public:
    
    bool func(int n, unordered_set <int> & visited){
        
        if( n == 1 ) return true;
        if( visited.find(n) != visited.end() ) return false;
        
        int sum = 0 ;
        visited.insert(n);
        while( n ){
            int digit = n%10;
            n/=10;
            sum += digit*digit;
        }
        
        
        return func(sum,visited);
    }
    
    bool isHappy(int n) {
        unordered_set <int> visited;
        return func(n,visited);
    }
};