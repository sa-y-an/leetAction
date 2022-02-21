
int _IO =[](){
    std :: ios :: sync_with_stdio (0);
    cin.tie (0);
    return 0;
 }();

class Solution {
public:  
    int majorityElement(vector<int>& nums) {
        int cnt = 0, candidate = 0;     
        for(auto num : nums ){
            if(cnt == 0 ) candidate = num;
            if( num == candidate ) cnt += 1;
            else cnt -= 1;
        }
        
        return candidate;
    }
};
