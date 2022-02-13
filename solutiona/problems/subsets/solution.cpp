class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int> > ret;
        const int n = pow(2,nums.size());
        for( int i = 0 ; i < n ; i++){
            // loop through the binary 
            // print 1 where it is 1
            vector <int> temp;
            for( int d = 31 ; d >= 0 ; d--){
                int idx = ((i>>d)&1);
                if( idx ) temp.push_back(nums[d]);
            }
            
            ret.push_back(temp);
        }
        
        return ret;
    }
};