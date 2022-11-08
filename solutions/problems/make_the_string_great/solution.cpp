class Solution {
public:
    string makeGood(string s) {
        
        string ans;
        for( auto ch : s ){
            if( ans.size() != 0 and tolower(ans.back()) == tolower(ch) and ans.back() != ch )
                ans.pop_back();
            else
                ans.push_back(ch);
        }
        return ans;
    }
};