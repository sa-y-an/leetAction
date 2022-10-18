class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        set <int> ans;
        unordered_set <int> uset;
        
        for ( int x : nums ){
            int neg = -1*x;
            if (uset.count(neg)){
                ans.insert(abs(x));
            }
            uset.insert(x);
        }
        
        if (ans.size() == 0 ) {
            return -1;
        }else {
            return *ans.rbegin();
        }
        
    }
};