class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map <string,int> umap;
        for( int i = 0 ; i < list2.size() ; i++)
            umap[list2[i]] = i;
                
        int minSum = INT_MAX;
        
        for( int i = 0 ; i < list1.size() ; i++)
            if( umap.find(list1[i]) != umap.end() )
                minSum = min(minSum, i+umap[list1[i]]);   
        
        vector <string> ans;
        for( int i = 0 ; i < list1.size() ; i++)
            if( umap.find(list1[i]) != umap.end()) 
               if(i+umap[list1[i]] == minSum) 
                   ans.push_back(list1[i]);
               
        return ans;
    }
};