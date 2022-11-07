class Solution {
public:
    
    vector <bool> visited;
    
    vector <vector <int>> adjList;
    vector <vector <int>> parent;
    vector <vector <int>> ancestors;
    
    void dfs(int currVer, int ver = -1){
        
        if( ver != -1 ) visited[ver] = true;
        if( ver == -1 ) ver = currVer;
        
        for( auto child : parent[ver]){
            if( visited[child] ) continue;
            ancestors[currVer].push_back(child);
            dfs(currVer,child);
        }
        
        
    }
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        
        // adjList 
        adjList.resize(n);
        for( int i = 0 ; i < edges.size() ; i++ ){
            adjList[edges[i][0]].push_back(edges[i][1]);
        }
        
        parent.resize(n);
        for( int i = 0 ; i < n ; i++){
            int currPar = i;
            for( int child : adjList[currPar]){
                parent[child].push_back(currPar);
            }
        }
        
        ancestors.resize(n);
        visited.resize(n,false);
        for( int i = 0 ; i < parent.size() ; i++){
            if( parent[i].size() == 0 ) continue;
            fill(visited.begin(), visited.end(), false);
            dfs(i);
        }
        
        for( auto &anc : ancestors ) {
            sort(anc.begin(), anc.end());
        }
        
        return ancestors;
        
        
    }
};