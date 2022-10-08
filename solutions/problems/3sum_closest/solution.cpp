// -5 -5 -4 0 0 3 3 4 5
const int INF = 1e9;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int ans = 0;
        int gdiff = INF;
        const int n = nums.size();
        for ( int i = 0 ; i < n ; i++){
            for( int j = i+1 , k = n-1 ; j < k ; ){
                int sum = nums[i]+nums[j]+nums[k];
                int diff = target - sum;
                if ( abs(diff) < gdiff ){
                    gdiff = abs(diff);
                    ans = sum;
                }
                if (diff < 0 ){
                    k--;
                }else if(diff > 0) {
                    j++;
                }else {
                    return sum;
                }
            }
        }
        
        return ans;
    }
};