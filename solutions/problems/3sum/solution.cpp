class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    
    if( nums.size() < 3 ) {
        return {};
    }
    
    vector < vector <int> > ret;
    sort(nums.begin() , nums.end() );
    // for( auto val : nums ) cout<<val<<" ";
    // cout<<endl;
    
    for(int i = 0 ; i < nums.size()-2 ; i++ ) {
        
        if(i>0 and nums[i] == nums[i-1] ) continue;
        
        int n = nums.size()-1;
        int temp = -1*nums[i];
        int j = i+1;
        while(j < n) {
            
            int sum = nums[j] + nums[n];
            
            if ( sum > temp ) {
                n--;
            }
            else if ( sum < temp){
                j++;
            }
            else {
                
                ret.push_back({nums[i], nums[j], nums[n]});  
                j++;
                while( j<n and nums[j] == nums[j-1]) j++;
            }
         }
    }
    
    return ret;
}

};