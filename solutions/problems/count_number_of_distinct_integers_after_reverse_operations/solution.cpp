class Solution {
public:
    
    int rev(int x){
        int ans = 0, k = floor(log10(x)+1)-1;
        while(x){
            ans += pow(10,k)*(x%10);
            x /= 10;
            k--;
        }
        return ans;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        
        unordered_set <int> ans;
        for ( int x : nums ){
            ans.insert(x);
            ans.insert(rev(x));
        }
        return ans.size();
    }
};