class Solution {
    vector <bool> visited;    
public:

    void dfs(int node ,vector <vector<int>> &rooms){

        visited[node] = true;
        for( int child : rooms[node]){
            if( !visited[child] )
                dfs(child, rooms);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        visited.resize(n, false);
        dfs(0,rooms);

        for( int i = 0 ; i < n ; i++){
            if( !visited[i] )
                return false;
        }

        return true;
    }
};