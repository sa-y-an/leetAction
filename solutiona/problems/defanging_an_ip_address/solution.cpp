class Solution {
public:
    string defangIPaddr(string address) {
        string def;
        for( auto ch: address){
            if( ch == '.') {
                def.push_back('[');
                def.push_back('.');
                def.push_back(']');
            }
            else def.push_back(ch);
        }
        return def;
    }
};