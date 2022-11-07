class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int low = 0 , high = nums.size()-1;
        
        while(low <= high ){
            
            int mid = low + (high-low)/2;
            if( mid+1 == nums.size() or nums[mid] > nums[mid+1] ){
                if( mid == 0 or nums[mid] > nums[mid-1]) return mid;
                high = mid;
            }
            else low = mid+1;
            
        }
        
        return -1;
    }
};