class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set <int> uset;
        for( auto jewel: jewels) uset.insert(jewel);
        
        int cnt = 0;
        for( auto stone : stones) if( uset.find(stone) != uset.end()) cnt++;
        
        return cnt;
    }
};