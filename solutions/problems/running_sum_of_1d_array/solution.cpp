class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> run(nums.size());
        for( int i = 0 ; i < nums.size() ; i++){
            run[i] = accumulate(nums.begin(),nums.begin()+i+1,0);
        }
        return run;
    }
};