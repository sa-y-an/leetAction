class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int pos = 0 , neg = 1 ;
        int n = nums.size();
        vector <int> ret(n,0);
        for(auto num: nums ){
            if( num > 0 ){
                ret[pos] = num;
                pos += 2;
            }
            else if( num < 0 ){
                ret[neg] = num;
                neg += 2;
            }
        }
        
        return ret;
        
    }
};