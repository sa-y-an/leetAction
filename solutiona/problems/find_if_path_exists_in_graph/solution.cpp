class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    
    
    unordered_set <int> visitedNode;
    
    bool dfs(vector < vector <int> > & adjList, int start, int end){        
        
        for(auto child : adjList[start] ){
            
            if( visitedNode.find(child) != visitedNode.end()) continue;
            
            visitedNode.insert(child);
            
            if( child == end ) return true;
            else if (dfs(adjList, child, end)) return true;
            
        }
        
        return false;
        
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        vector < vector <int> > adjList (n);
        
        if( start == end ) return true;
    
        
        for( int i = 0 ; i < edges.size() ; i++ ){
            int v1 = edges[i][0] , v2 = edges[i][1];
            
            adjList[v1].push_back(v2);
            adjList[v2].push_back(v1);
            
        }

        
        return dfs(adjList, start, end);
        
        return false;
    }
};