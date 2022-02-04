class Solution {
public:
    int mySqrt(int x) {
        
        int low = 1, high = x/2 + 1 ;
        long long res = 0;
        while( low <= high ){
            
            long long mid = low + (high-low)/2;
            
            if( mid*mid < x ){
                res = max(res,mid);
                low = mid+1;
            }
            else if( mid*mid > x ){
                high = mid-1;
            }
            else return mid;
        }
        
        return res;
        
        
    }
};