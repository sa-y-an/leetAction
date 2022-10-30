class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int cnt = 0;
        int total = 0;
        for( int num : nums ){
            if( num%6 == 0 ){
                cnt++;
                total += num;
            }
        }
        
        // cout << total << " " << cnt << " ";
        
        if( cnt == 0 )
            return 0;
        
        return total/cnt;
    }
};