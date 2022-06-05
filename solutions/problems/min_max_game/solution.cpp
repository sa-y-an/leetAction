class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        while( nums.size() > 1 ){
            int m = nums.size();
            int n = m/2;
            vector <int> newArr(n,0);
            
            for( int i = 0 ; i < n ; i++){
                if( i%2 == 0 ){
                    newArr[i] = min(nums[2 * i], nums[2 * i + 1]);
                }
                else {
                    newArr[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            
            nums.clear();
            nums = newArr;
        }
        
        return nums[0];
    }
};