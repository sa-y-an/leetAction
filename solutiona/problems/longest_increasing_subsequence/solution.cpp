class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
 
    
    int lengthOfLIS(vector<int>& nums) {
            
        vector <int> lis(nums.size()+1,1 );
        
        for( int i = lis.size()-3 ; i >=0 ; i-- ){
            for( int j = i+1 ; j < nums.size() ; j++ ){
                if( nums[j] > nums[i] ){
                    lis[i] = max(lis[i], 1 + lis[j]);
                }
            }            
        }
        
        return *max_element(lis.begin(), lis.end());
    }
};