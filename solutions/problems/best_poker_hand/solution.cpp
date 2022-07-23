class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        unordered_map <int,string> umap;
        umap[1] = "High Card";
        umap[2] = "Pair";
        umap[3] = "Three of a Kind";
        umap[4] = "Flush";
        
        auto start = suits[0];
        int i = 1;
        while( i < suits.size() and suits[i] == start )
            i++;
        
        if( i == suits.size() )
            return umap[4];
        
        unordered_map <int,int> cnt;
        for( auto num : ranks )
            cnt[num]++;
        
        vector <int> vals;
        for( auto &[i,j] : cnt )
            vals.push_back(j);
        
        sort(vals.begin(),vals.end(), greater <int> ());
        
        if( vals[0] >= 3 )
            return umap[3];
        
        if( vals[0] == 2 )
            return umap[2];
        
        return umap[1];
        
    }
};