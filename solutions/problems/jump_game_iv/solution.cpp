class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        const int n = arr.size();
        vector <int> level(n,-1);
        unordered_map <int, vector <int> > umap;
        
        for( int i = 0 ; i < arr.size() ; i++)
            umap[arr[i]].push_back(i);
        
        queue <int> q;
        q.push(0);
        level[0] = 0;
        
        while( not q.empty()){
            
            int currver = q.front();
            q.pop();
            
            vector <int> &children = umap[arr[currver]];
            if( currver-1 > -1 ) children.push_back(currver-1);
            if( currver+1 < n ) children.push_back(currver+1);            
            
            for( auto child : children){
                if( level[child] != -1 ) continue;
                level[child] = level[currver]+1;
                if( child == n-1 ) return level[child];
                q.push(child);
            }
            
            children.clear();
            
        }
        
        return level[n-1];
        
        
    }
};