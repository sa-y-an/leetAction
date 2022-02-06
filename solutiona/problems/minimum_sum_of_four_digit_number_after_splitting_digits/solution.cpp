class Solution {
public:
    
//     2932
    int minimumSum(int num) {
        
        vector <int> nums(4,0);
        
        int i = 0 ;
        while( num ){
            
            nums[i] = num%10;  
            num /= 10;
            i++;
        }
        
        
        sort( nums.begin(), nums.end());
        // for( auto i : nums ) cout<<i<<" ";

        
        int digit1 = nums[0]*10 + nums[2];
        int digit2 = nums[1]*10 + nums[3];
        
        return digit1+digit2;
        
    }
};