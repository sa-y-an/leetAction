class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        // solution

        int minOdd = INT_MAX, maxOdd = INT_MIN;
        int tempOdd;
        bool flag = false;

        for( int i = 0 ; i < nums.size() ; i++ ){

            if( (i>0 and nums[i] < nums[i-1]) or (i < nums.size()-1 and nums[i] > nums[i+1] ) ) {
                tempOdd = nums[i];
                flag = true;
                minOdd = min(minOdd, tempOdd);
                maxOdd = max(maxOdd, tempOdd);
            }

        }

        if( !flag) return 0;

        // minimum element pos

        cout<<minOdd<<" "<<maxOdd<<endl; 

      

        int left = 0;
        while(minOdd >= nums[left]){
            left++;
        }
        int right = nums.size() - 1;
        while(maxOdd <= nums[right]){
            right--;
        }
        // maximum element pos



        return right-left+1;

        
    }
};