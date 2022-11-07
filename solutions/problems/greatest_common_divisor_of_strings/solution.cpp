class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    string gcdOfStrings(string str1, string str2) {     
        if( str1+str2 == str2+str1 ) {
            return str1.substr(0, __gcd(str1.size(), str2.size()) );
        }
        return "";       
    }
};