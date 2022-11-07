/*
The states in the recursion are -
1. chosen 
2. index 
*/

class Solution {
    vector <vector<int>> ans;
    vector <int> chosen;
public:
    
    
    void generate(vector <int> & nums, int idx=0 ){
        if( idx > nums.size()-1 ){
            ans.push_back(chosen);
            return;
        } 
        chosen.push_back(nums[idx]);
        generate(nums, idx+1);
        chosen.pop_back();
        generate(nums, idx+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        generate(nums);
        return ans;
    }
};