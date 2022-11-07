class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCnt = 0;
        for( auto &sentence : sentences ){
            int cnt=1;
            for( auto ch: sentence ) if( ch == ' ' ) cnt++;
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};