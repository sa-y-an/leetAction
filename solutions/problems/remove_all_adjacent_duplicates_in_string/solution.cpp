class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans;
        for( char ch : s ){
            if( ans.empty () || ans.back() != ch )
                ans.push_back(ch);
            else
                ans.pop_back();
        }

        return ans;
    }
};