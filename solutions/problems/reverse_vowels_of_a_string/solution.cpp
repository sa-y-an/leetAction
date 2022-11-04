class Solution {
public:
    string reverseVowels(string s) {
        
        int l = 0 , r = s.size()-1;
        unordered_set <char> uset = {'a','e','i','o','u', 'A','E','I','O','U'};
        while( l < r ){
            while( l < r and uset.count(s[l]) == 0  ) l++;
            while( l < r and uset.count(s[r]) == 0 ) r--;
            if( l < r ){
                swap(s[l++],s[r--]);
            }
        }

        return s;
    }
};