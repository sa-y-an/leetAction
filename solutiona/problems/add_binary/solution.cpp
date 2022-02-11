class Solution {
public:
    string addBinary(string &a, string &b) {
        int B = b.size(), A = a.size(), carry = 0;
        string ret;
         
        while( B or A or carry ){
            int sum = 0;
            if( B ){
                sum += b[B-1] - '0';
                B--;
            }
            if(A){
                sum += (a[A-1]-'0');
                A--;
            }
            if( carry ){
                sum += carry;
            }
            
            if( sum > 1 ) {
                carry = 1;
                sum -= 2;
            }
            else carry = 0;
            ret.push_back(sum + '0');
        }
        
        

        reverse(ret.begin(), ret.end());
        return ret;
    }
};