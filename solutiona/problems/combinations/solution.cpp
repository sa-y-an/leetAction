class Solution {
public:
    
    vector <int> nums;
    vector <int> chosen;
    vector < vector <int> > ans;
    int maxSize;
    
    void formCombinations(int idx){
        if( idx < 0 ) return;
        if( chosen.size() == maxSize){
            ans.push_back(chosen);
            return;
        }
 
        chosen.push_back(idx);
        formCombinations(idx-1);
        chosen.pop_back();
        formCombinations(idx-1);
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        maxSize = k;
        for( int i = 1 ; i <= n ; i++)
            nums.push_back(i);
        formCombinations(n);
        return ans;
            
    }
};