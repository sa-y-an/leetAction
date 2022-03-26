class Solution {
    vector <vector <int>> ans;
     
public:
    void genPermute(vector <int> & nums, vector <int> chosen = {}){
        
        if( nums.size() == 0) {
            ans.push_back(chosen);
            return;
        }
        
        for( int i = nums.size()-1 ; i >= 0 ; i--){
            int poppedVal = nums[i];
            chosen.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            genPermute(nums, chosen);
            chosen.pop_back();
            nums.insert(nums.begin()+i, poppedVal);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        genPermute(nums);
        return ans;
    }
};