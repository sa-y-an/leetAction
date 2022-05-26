class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        for(int i = 31 ; i >= 0 ; i--){
            if( ((y>>i)&1)-((x>>i)&1) != 0 ) ans++;
        }
        return ans;
    }
};