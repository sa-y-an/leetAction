const int INF = 1e9;

class Solution {
    vector < vector <pair<int,int>>> adjList;
    vector <int> distance;
    vector <bool> visited;
public:
    
    void dijikstra(int source){
        
        distance[source] = 0;
        set < pair <int, int>> st;
        // set of wt and edge
        
        st.insert({0,source});
        
        while( not st.empty()){
            auto node = *st.begin();            
            int currVer = node.second;
            int currWt = node.first;
            st.erase(node);
            
            if( visited[currVer]) continue;
            visited[currVer] = true;
                
            for( auto child : adjList[currVer]){
                // cout<<"hi ";
                int childEdge = child.first;
                int childWeight = child.second;
                if( childWeight + distance[currVer] < distance[childEdge]){
                    distance[childEdge] = childWeight + distance[currVer];
                    st.insert({distance[childEdge], childEdge});
                }
                
            }
        }
            
    }
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        // taking the input
        adjList.resize(n+1);

        // adjList is a vector of ( vector of pairs)
        // each vector of pairs is a adjacency of that index
        for( int e = 0 ; e < times.size() ; e++){
            int u = times[e][0] , v = times[e][1] , w = times[e][2];
            adjList[u].push_back({v,w});
        }
        
        distance.resize(n+1, INF);
        distance[0] = 0;
        visited.resize(n+1, false);
        dijikstra(k);
        
        int ret = *max_element(distance.begin(), distance.end());
        
        if( ret == INF) return -1;
        else return ret;
        
    }
};