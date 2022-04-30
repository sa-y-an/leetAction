class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector <long long> upto(n,nums[0]), after(n,nums.back());
        
        for( int i = 1 ; i < n ; i++){
            upto[i] = nums[i] + upto[i-1];
        }
        
        for( int i = n-2 ; i >= 0 ; i--){
            after[i] = nums[i] + after[i+1];
        }
            
        
        int _minDiff = INT_MAX, _minIdx = 0;
        for( int i = 0 ; i < n-1 ; i++){
            int curr = abs( (upto[i]/(i+1)) - (after[i+1]/(n-i-1)) );
            if( curr < _minDiff) _minDiff = curr, _minIdx = i;
        }
        
        if( upto.back()/n < _minDiff ) _minIdx = n-1;
        
        return _minIdx;
        
    }
};