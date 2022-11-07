class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        unordered_map <int, int> targetCount;
        
        for( int i = 0 ; i <= nums.size()-2 ; i++){
            if( nums[i] == key ) targetCount[nums[i+1]]++;
        }
            
        int target =0 ;
        int maxCount = 0;
        for( auto it : targetCount ){
            if( it.second > maxCount ){
                maxCount = it.second;
                target = it.first;
            }
        }
        
        return target;
        
    }
};