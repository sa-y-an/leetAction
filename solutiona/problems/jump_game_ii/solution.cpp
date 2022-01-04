class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int jump(vector<int>& nums) {
        
        vector <int> minSteps(nums.size(), INT_MAX);
        minSteps[minSteps.size()-1] = 0;
        
        for(int i = nums.size()-2 ; i >= 0 ; i-- ){
            for(int j = i+1 ; j <= nums[i]+i and j < nums.size() ; j++ ){
                if(  minSteps[j] != INT_MAX ) 
                    minSteps[i] = min(minSteps[i], 1 + minSteps[j] );
            }
        }
        
        return minSteps[0];
    }
};