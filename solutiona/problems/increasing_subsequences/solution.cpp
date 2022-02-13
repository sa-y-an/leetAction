class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        vector <vector <int>> ret;
        const int n = pow(2,nums.size());
        // print binaries of number till n        
        
        for( int i = 0 ; i < n ; i++){
            // every index of this digit which is one is a valid comb
            vector <int> temp;
            bool flag = true;
            // individual subset
            // binary of the number

            for( int d = 31; d >= 0 ; d--){
                if( ((i>>d)&1) ){
                    if( temp.size() == 0 ) temp.push_back(nums[d]);
                    else if( temp.back() >= nums[d] ) 
                        temp.push_back(nums[d]);
                    else {
                        flag = false;
                        break;
                    }
                } 
            }

            
            if( flag and temp.size() > 1 ) {
                reverse(temp.begin(), temp.end());
                ret.push_back(temp);
            }
        }
        
        sort( ret.begin(), ret.end());
        vector <vector <int>> uq;
        
        for( auto it: ret ){
            if ( uq.empty() ) uq.push_back(it);
            else if ( uq.back() == it ) continue;
            else uq.push_back(it);
        }
        
        return uq;
    }
};