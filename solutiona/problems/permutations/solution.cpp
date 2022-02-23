class Solution {
public:
    vector<vector<int>> ans;
    
    void permutations(vector<int>& nums, vector <int> chosen= {}){
        if( nums.size() == 0 ){
            ans.push_back(chosen);         
            return;
        }
        
        for( int i = 0 ; i < nums.size() ; i++){
            int temp = nums[i];
            nums.erase(nums.begin()+i);
            chosen.push_back(temp);
            permutations(nums,chosen);
            chosen.pop_back();
            nums.insert(nums.begin()+i,temp);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums);
        return ans;
    }
};