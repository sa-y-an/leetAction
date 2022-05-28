class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        vector <vector <int>> adjList(n);
        for( auto &road : roads){
            adjList[road[0]].push_back(road[1]);
            adjList[road[1]].push_back(road[0]);
        }
        
        vector <pair<int,int>> imp;
        for( int i = 0 ; i < n ; i++){
            imp.push_back({adjList[i].size(),i});
        }
        
        sort(imp.begin(),imp.end());
        
        vector <int> value(n);
        for( int i = 0 ; i < n ; i++){
            auto city = imp[i].second;
            value[city] = i+1;
        }
        
        long long ans = 0;
        for( auto &road : roads ){
            long long impo = value[road[0]] + value[road[1]];
            ans += impo;
        }
        
        return ans;
        
    }
};