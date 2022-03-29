class Solution {
    unordered_set <int> uset;
public:
    int findDuplicate(vector<int>& nums) {
        for( auto num :nums ){
            if( uset.count(num) > 0 ) return num;
            uset.insert(num);
        }
        return -1;
    }
};