class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for( int i = 0 ; i < n ; i++){
            int x = nums[i];
            for( int j = i+1 ; j < n ; j++){
                int y = nums[j];
                for( int k = j+1 ; k < n ; k++){
                    int z = nums[k];
                    if( x != y && y != z && x != z )
                        ans++;
                }
            }
        }

        return ans;
    }
};