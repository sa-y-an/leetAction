class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map <int, int> loser, winner;
        
        for( auto &match : matches ) loser[match[1]]++ , winner[match[0]]++;
        vector <int> oneMatch, undefeat;
        
        for( auto &it : loser ) {
            if( it.second == 1 ) oneMatch.push_back(it.first);
        }
        
        for( auto &it : winner  ){
            int player = it.first;
            if( loser.find(player) == loser.end() ) undefeat.push_back(player);
        }
        
        sort(oneMatch.begin(), oneMatch.end());
        sort(undefeat.begin(), undefeat.end());
        
        return {undefeat, oneMatch};
        
        
    }
};