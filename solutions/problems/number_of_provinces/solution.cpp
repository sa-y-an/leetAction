class Solution {
public:
    vector <unordered_set <int>> adjList;
    vector <int> visited;
    void dfs(int vertex){
        
        visited[vertex] = true;
        for( auto child: adjList[vertex]){
            if( visited[child]) continue;
            dfs(child);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        const int N = isConnected.size();
        adjList.resize(N);
        visited.resize(N,false);
        for( int y = 0 ; y < N ; y++){
            for( int x = 0 ; x < N ; x++){
                if( isConnected[y][x]){
                    adjList[y].insert(x);
                    adjList[x].insert(y);
                }
            }
        }
        int dfsCount = 0;
        for( int i = 0 ; i < adjList.size() ; i++){
            if( visited[i]) continue;
            dfs(i);
            dfsCount++;
        }
        
        return dfsCount;
        
    }
};