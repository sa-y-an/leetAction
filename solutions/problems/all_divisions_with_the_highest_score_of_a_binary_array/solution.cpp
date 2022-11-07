class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        
        vector <int> one(nums.size()+1, 0);
        vector <int> zero(nums.size()+1, 0);
        
        int n = nums.size();
        
        for( int i = 0 ; i < n ; i++ ){
            if( nums[i] == 0 ) zero[i+1] = 1 + zero[i];
            else zero[i+1] = zero[i];          
        }
        
        for( int i = n-1 ; i >= 0 ; i-- ){
            if( nums[i] == 1 ) one[i] = one[i+1]+1;
            else one[i] = one[i+1];
        }
        
        vector <int> maxSum(n+1,0);
        for( int i = 0 ; i <= n ; i++ ){
            maxSum[i] = one[i]+zero[i];
        }
        
        int maxs = *max_element(maxSum.begin(),maxSum.end());
        
        vector <int> ret;
        
        for( int i = 0 ; i <= n ; i++ ){
            if( maxSum[i] == maxs) ret.push_back(i);
        }
        
        return ret;
    }
};