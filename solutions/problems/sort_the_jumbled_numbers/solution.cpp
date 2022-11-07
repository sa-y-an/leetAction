class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        pair <int, int> mpVal;
        vector < pair <int,int> > finalOrder;
        
        for( int i = 0 ; i < nums.size() ; i++){
            
            int idx = i;
            int num = nums[i];
            
            int mappedNum = 0;
            int k = 0;
            
            if( num == 0 ){
                mappedNum = mapping[0];
            }
            
            while( num ){
                mappedNum += mapping[(num%10)]*pow(10,k);
                // cout<<num<<" "<<mappedNum<<"\n";
                num/= 10;
                k++;
            }
            
            finalOrder.push_back({mappedNum, idx});
        }
        
        sort(finalOrder.begin(), finalOrder.end());
        // for( auto it : finalOrder ){
        //     cout <<it.first<<" "<<it.second<<"\n";
        // }
        
        vector <int> ret;
        for( auto it: finalOrder) ret.push_back(nums[it.second]);
        
        return ret;
    }
};