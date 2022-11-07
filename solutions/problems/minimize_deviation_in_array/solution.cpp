class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int minimumDeviation(vector<int>& nums) {
        set <int> s;
        for( auto num : nums ) {
            if( num%2 == 0 ) s.insert(num);
            else s.insert(num*2);
        }
        int minDiff = *s.rbegin()-*s.begin();
        while( *s.rbegin()%2 == 0 ){
            
            int maxElt = *s.rbegin();
            s.erase(maxElt);
            s.insert(maxElt/2);
            
            minDiff = min(minDiff, *s.rbegin()-*s.begin());
        }
        
        return minDiff;
    }
};