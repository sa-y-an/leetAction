class Solution {
public:
    int search(vector<int>& nums, int target) {
        // search first index smaller than star
        int low = 0 , high = nums.size()-1;
        int pos = -1;
        while( low <= high){
            int mid = low + (high-low)/2;
            if( nums[mid] >= nums[0] ) low = mid+1;
            else pos = mid,high = mid-1;
        }
        // cout<<pos;
        
        if( pos == -1 ) low = 0 , high = nums.size()-1;        
        else if( target >= nums[0] ) low = 0 , high = pos-1;
        else low = pos , high = nums.size()-1;
        
        while( low <= high ){
            int mid = low + (high-low)/2;
            if( nums[mid] > target) high = mid-1;
            else if( nums[mid] < target) low = mid+1;
            else return mid;
        }
        
        return -1;
        
    }
};