class Solution {
public:

    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }


    int minDeletionSize(vector<string>& strs) {
        
        int cnt = 0 ;
        
        for( int x = 0 ; x < strs[0].size() ; x++ ){
            for(int y = 0 ; y < strs.size()-1 ; y++){
                if( strs[y][x] <= strs[y+1][x] ) continue;
                else {
                    cnt += 1;
                    break;
                }
            }
        }
        
        return cnt;
        
    }
};