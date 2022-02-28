class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <vector <int>> ans;
        int i = 0 ;
        
        while( i < nums.size()){
            
            vector <int> temp;
            temp.push_back(nums[i++]);
            
            while( i < nums.size() and nums[i] == temp.back()+1){
                if( temp.size() > 1 ) temp.pop_back();
                temp.push_back(nums[i++]);
            }
            
            ans.push_back(temp);
        }
        
        vector <string> ret;
        for( auto &it: ans){
            string temp;
            for( auto i : it ){
                if( temp.size() > 0) temp += "->";
                temp += to_string(i);
            }
            ret.push_back(temp);
        }
        
        return ret;
    }
};