class Solution {
public:
    
    int maximumSum(vector<int>& nums) {
        
        unordered_map <int,vector <int>> umap;
        
        for( auto num : nums ){
            int curr = 0;
            int temp = num;
            while( num ){
                curr += num%10;
                num /= 10;
            }
            umap[curr].push_back(temp);
        }
        
        int ans = -1;
        for( auto &[x,v] : umap ){
            
            sort(v.begin(),v.end(), greater <int> ());
            if( v.size() >= 2 ){
                ans = max(ans,v[0]+v[1]);
            }
        }
        
        return ans;
        
    }
};