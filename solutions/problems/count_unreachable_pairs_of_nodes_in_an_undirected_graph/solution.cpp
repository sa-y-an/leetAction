class Solution {
    vector <bool> visited;
    vector <vector <int>> adjList;
public:
    
    int dfs( int x){
        
        if( visited[x] )
            return 0;
        
        visited[x] = true;
        
        int sz = 1;
        for( auto child : adjList[x] ){
            
            if( visited[child] )
                continue;
            sz += dfs(child);
        }
        
        return sz;
        
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        visited.resize(n, false);
        adjList.resize(n);
        
        for( auto &edge : edges ){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        
        vector <int> comp;
        
        for( int i = 0 ; i < n ; i++){
            if( visited[i])
                continue;
            int sz = dfs(i);
            comp.push_back(sz);
                
        }
        
        long long total = accumulate( comp.begin(), comp.end(), 0*1LL);
        long long ans = 0;
        
        for( long long x : comp ){
            ans += x*(total-x);
        }
        
        return ans/2;
        
    }
};