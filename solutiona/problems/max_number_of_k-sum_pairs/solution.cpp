class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int,int> um;
        for(auto it:nums){
            if(it>=k){
                continue;
            }
            um[it]++;
        }
        int ans=0;
        for(auto it:um){
            if(um.count(k-it.first)){
                ans+=min(um[k-it.first],it.second);
            }
        }
        ans/=2;
        return ans;
        
    }
};
