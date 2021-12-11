class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        unordered_map <int, int> umap;
        
        umap[0] = umap[1] = umap[2] = 0;
        
        for(auto val : nums) umap[val]++;
        
        int i =0 ;
        
        while( i < nums.size() ){
            
            while( i < nums.size()  and umap[0]--) {
                nums[i] = 0;
                i++;
            }
            
            while(i < nums.size()  and umap[1]--) {

                nums[i] = 1;
                i++;
            }
            
            while(i < nums.size()  and umap[2]--) {
                
                nums[i] = 2;
                i++;
            }
            
        }
        
    }
};