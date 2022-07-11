class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int maxi = nums.size()+1;
        unordered_set <int> s;
        for( int i = 1; i <= maxi ; i++)
            s.insert(i);
        
        for( int x : nums ){
            if( s.count(x) )
                s.erase(x);
        }
        
        int mini = maxi;
        for( int i : s )
            mini = min(i,mini);
        
        return mini;
    }
};