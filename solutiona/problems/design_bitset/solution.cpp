
class Bitset {
public:
    
    int sum; // a sum variable 
    bool flipped;
    vector <bool> bitArray;
    int n;
    
    Bitset(int size) {
        // initialization of the  bitarray
        bitArray = vector <bool> (size,false); 
        sum = 0;
        flipped = false;
        n = size;
        
        // avoid the code below
        // it is for faster execution 
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    
    void fix(int idx) {
        // xor gives true when both inputs are different 
        // so we take xnor 
        // we need to set if the given bit is not set and flipped is true or vice versa
        // we update the sum variable accordingly
        if (!(bitArray[idx] ^ flipped))
            bitArray[idx] = !bitArray[idx], sum++;

    }
    
    void unfix(int idx) {
        // we need to unfix if the given idx is set and flipped is false or vice versa
        if (bitArray[idx] ^ flipped)
            bitArray[idx] = !bitArray[idx], sum--;
    }
    
    void flip() {
        // we update the sum 
        flipped = !flipped;
        sum = n-sum;
    }
    
    // rest part is trivial 
    // since the sum is composed of ones and zeros
    // the sum gives us the number of zeroes in the bit array
    
    bool all() {
        return sum == n;
    }
    
    bool one() {
        return sum > 0;
    }
    
    int count() {
        return sum;
    }
    
    string toString() {
        string ret;
        for( auto it : bitArray){
            if( it^flipped  ) ret.push_back('1');
            else ret.push_back('0');
        }
        return ret;
    }
};
