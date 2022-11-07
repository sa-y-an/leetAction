class Solution {
public:
    
    int getLucky(string s, int k) {
        
        int digit = 0;
        for( auto ch : s ){
            int curr = (int) (ch - 'a' + 1);
            while(curr){
                digit += curr%10;
                curr /= 10;
            }
        }
                
        k--;
        
        while(k){
                
            int newDigit = 0;
            
            while( digit){
                newDigit += digit%10;
                digit /= 10;
            }
            
            digit = newDigit;
            k--;
        }
        
        return digit;
        
    }
};