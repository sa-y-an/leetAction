class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int majorityElement(vector<int>& nums) {
        
    int cnt=1,curr=nums[0];
    for(int i=1;i<nums.size();i++){
            if(nums[i]==curr)  cnt++;
            else cnt--;
            if(cnt==0){
                
         curr=nums[i+1];
          
       }
   }
    return curr;

    }
};