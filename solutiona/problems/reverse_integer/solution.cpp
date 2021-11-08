class Solution {
public:
    int reverse(int x) {
        
        long int n = x;
        long int ret = 0;
        
        if ( n== 0 ){
            return 0;
        }
        
        int k= (int) (log10(abs(n)) +1) ;
        // cout<<INT_MAX;
        while(n){
            
            ret += (n%10)*pow(10,k-1);   
            k--;
            n /= 10;
        }
        
        ret += (n%10)*pow(10,k-2);
        
        if ( (ret > INT_MAX ) || (ret < INT_MIN) ){
            return 0;
        }else {
            return (int) ret;
        }
        

    }
};