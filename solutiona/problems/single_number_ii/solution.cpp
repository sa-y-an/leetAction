class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int singleNumber(vector<int>& nums) {
        
        long shift = 1; 
        int newNum = 0;
    
        for( int i = 0 ; i < 32 ; i++){     
            int cnt = 0;            
            for( auto num:nums){
                cnt += ((num>>i)&1);  
            }
            newNum += shift*(cnt%3);
            shift = shift*2;
        }
        return newNum;
    }
    
};