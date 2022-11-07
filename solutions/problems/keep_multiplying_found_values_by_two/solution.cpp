class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_set <int> multiples;
        
        for( auto it : nums ){
            if( it%original == 0 ) {
                multiples.insert(it);
            }
        }
        
        bool found = true;
        
        while( multiples.find(original) != multiples.end() ){  
            original *= 2;
        }
        
        return original;
    }
};