class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int l, r;
        int minSum = nums[0]+nums[1]+nums[2];
        
        for( int i = 0 ; i < nums.size() ; i++){
            l = i+1;
            r = nums.size()-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if( abs(sum-target) < abs(minSum-target) ) {
                    minSum = sum;
                }
                
                if( sum-target > 0 ) r--;
                else if( sum-target < 0) l++;
                else return target;
            }
        }
        
        return minSum;
        
    }
};