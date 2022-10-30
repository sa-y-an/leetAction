class Solution {
public:
    
    long long getDigitSum(long long n){
        
        long long ans = 0;
        while( n ){
            ans += n%10;
            n /= 10;
        }
        
        return ans;
    }
    
    long long makeIntegerBeautiful(long long n, int target) {
        
        long long ans = 0;
        long long place = 1;
        long long currSum = getDigitSum(n);
        while( getDigitSum(n) > target ){
            int digit = n%10;
            if (digit > 0){
                n += (10-digit);
                ans += place*(10-digit);
            }
            place*= 10;
            n /= 10;
        }
        
        return ans;
    }
};