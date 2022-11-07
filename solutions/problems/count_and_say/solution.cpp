class Solution {
public:
    string countAndSay(int n) {
        if( n == 1 ) return "1";
        string prev = countAndSay(n-1);
        
        int idx = 0;
        string ret;
        
        while( idx < prev.size()){
            
            int preffix = 1;
            while( idx+1 < prev.size() and prev[idx+1] == prev[idx] ){
                preffix++;
                idx++;
            }
            
            idx++;
            string temp = to_string(preffix);
            temp += prev[idx-1];
            
            ret += temp;
        }
        
        return ret;
    }
};