class Solution {
public:
    
    static bool comparator(pair <string,int> &p1, pair <string,int> &p2){
        if( p1.second != p2.second ) return p1.second > p2.second;
        return p1.first < p2.first;
    }
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map <string, int> mpp;
        for ( string &word : words ) mpp[word]++;
        vector <pair <string,int>> ans;
        for( auto &[str,freq] : mpp ) ans.push_back({str,freq});
        sort(ans.begin(), ans.end(), comparator);
        
        
        vector <string> ret;
        for ( int i = 0 ; i < k ; i++) ret.push_back(ans[i].first);
        
        return ret;
    }
};