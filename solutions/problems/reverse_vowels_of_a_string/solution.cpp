class Solution {
public:
    string reverseVowels(string s) {
        
        unordered_set <char> vowels = {
            'a','e','o','u','i','A','E','I','O','U'
        };
        
        vector <int> vowelIndices;
        
        for(int i=0 ; i<s.size() ; ++i ) {
            
            if( vowels.find( s[i] ) == vowels.end() ) continue;
            
            vowelIndices.push_back(i);
            
        }
        
        // if (vowelIndices.size() < 2) return s;
        
        int l = 0;
        int r = vowelIndices.size()-1;
        
        while( l < r ) {
            
            swap(s[vowelIndices[l]], s[vowelIndices[r]]);
            
            l++;
            r--;
        }
        
     return s;   
    }
};