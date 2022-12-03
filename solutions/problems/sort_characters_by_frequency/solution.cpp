class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map <char,int> fmap;
        for( auto ch : s ) fmap[ch]++;
        vector <pair<int,char>> vi;
        for( auto &[ch,f] : fmap) vi.push_back({f,ch});
        sort(vi.begin(), vi.end(), greater <pair<int,char>> ());
        string ans;
        for( auto &[f, ch] : vi ) while( f--) ans.push_back(ch);
        return ans;
    }
};