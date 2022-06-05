class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
      
      unordered_map <int, int> mpp;
      int n = nums.size();
      for( int i = 0 ; i < n ; i++){
        mpp[nums[i]] = i;
      }
      
      for( auto &operation : operations ){
        
        int a = operation[0], b = operation[1];
        int idx = mpp[a];
        
        mpp.erase(a);
        nums[idx] = b;
        mpp[b] = idx;
      }
      
      return nums;
    }
};