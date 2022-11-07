class Solution {
public:
    int maximum69Number (int x) {
        
        string nums = to_string(x);
        int l = 0 , r = nums.size()-1;
        while( l <= r and nums[l] != '6' ) l++;
        if( l <= r and nums[l] == '6') nums[l] = '9';
        return stoi(nums);
    }
};