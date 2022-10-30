class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        
        unordered_map <string,long long> popularity;
        unordered_map <string, pair<long long,string>> mostViewed;
        
        int n = creators.size();
        long long maxP = 0;
        for( int i = 0 ; i < n ; i++){
            popularity[creators[i]] += views[i];
            if( !mostViewed.count(creators[i]) or (mostViewed[creators[i]].first < views[i] or 
                                                   (mostViewed[creators[i]].first == views[i]) and 
                                                   mostViewed[creators[i]].second > ids[i])){
                mostViewed[creators[i]].first = views[i];
                mostViewed[creators[i]].second = ids[i];
            }
            maxP = max(maxP, popularity[creators[i]]);
        }
        
        vector<vector<string>> ans;
        for( auto &[c,v] : popularity){
            if( v == maxP ) {
                ans.push_back({c,mostViewed[c].second});
            }
        }
        
        return ans;
        
        
    }
};