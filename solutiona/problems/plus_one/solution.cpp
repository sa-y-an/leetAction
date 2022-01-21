class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 0;
        
        carry = 1;
        
        for( int pos = digits.size()-1 ; pos >= 0 and carry > 0 ; pos--){
            int temp = digits[pos]+carry;
            digits[pos] = temp%10;
            carry = temp/10;
        }
        
        // cout<<carry;
        
        if(carry) {
            digits.insert(digits.begin(),carry);
        }
        
        return digits;
        
    }
};