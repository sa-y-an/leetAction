class Solution {
public:
    bool isPalindrome(int x) {
        
        if( x < 0 ) return false;
        if(x== 0 ) return true;
        
        long int rev=0, it=x;
        long int k =  trunc(log10(x));
        
        while( it ) {
            
            rev += pow(10,k)*( (int) it%10);
            k--;
            it /= 10;
            
        }
        cout<<rev;
        
        if( rev == x ) return true;
        else return false;
        
        
    }
};