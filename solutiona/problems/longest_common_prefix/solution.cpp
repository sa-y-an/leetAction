class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    string longestCommonPrefix(vector <string> & strs) {
        
        int minSize = INT_MAX ;
        for( auto str: strs ){
            int x = str.size();
            minSize = min(minSize, x);
        }

        string ret;

        for( int i = 0 ; i < minSize ; i++){
            char temp = strs[0][i];
            bool flag = false;

            for( int j = 1 ; j < strs.size() ; j++  ){
                if( strs[j][i] != temp ) {
                    flag = true;
                    break;
                }
            }
            
            if( flag ) break;
            ret.push_back(temp);

        }

    return ret;
    }
};