class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }


        void findCombinations(vector < vector <int> > & combinations ,vector<int>& candidates, int targetSum, vector <int> chosen = {} , int idx = 0) {

            if( targetSum == 0 ) {
                combinations.push_back(chosen);
                return;
            }
            else if( targetSum < 0 or idx > candidates.size()-1 ) {
                return;
            }
            else {
                int remainder = targetSum-candidates[idx];

                if( remainder >= 0  ){

                    chosen.push_back(candidates[idx]);
                    findCombinations(combinations,candidates,remainder,chosen,idx);
                    chosen.pop_back();			
                }


                findCombinations(combinations,candidates,targetSum,chosen,idx+1);
            }

        }


        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
                vector <vector<int> > combinations;
                findCombinations(combinations, candidates, target,{},0);
                return combinations;
        }

};