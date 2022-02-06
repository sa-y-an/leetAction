class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        int n = nums.size();
        vector <int> odd;
        vector <int> even;
        
        for( int i = 0 ; i < n ; i++){
            
            if( i%2 == 0 ) even.push_back(nums[i]);
            else odd.push_back( nums[i]);
            
        }
        
        
        sort( even.begin(), even.end());
        sort( odd.begin(), odd.end(), greater<int>());
        
        int ei = 0;
        int oi = 0;
        vector <int> ret;
        
        for( int i = 0 ; i < nums.size() ; i++){
            
            if( i%2 == 0 ) {
                ret.push_back(even[ei]);
                ei++;
            }
            else {
                ret.push_back(odd[oi]);
                oi++;
            }
            
        }
        
        return ret;
    }
};