class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        unordered_map <string,int> nonPal;
        unordered_map <string,int> pal;
        
        
        for( auto word : words ) {
            if(word[0] != word[1] ) nonPal[word]++;
            else pal[word]++;           
        }
        
        int cnt = 0 ;
        
        for( auto word : words ) {
            
            string temp = {word[1],word[0]};
            if( word[0] == word[1] ) continue;
            if( nonPal.find(temp) != nonPal.end() ) {
                
                if( nonPal[word] > 0 and nonPal[temp] > 0 ){
                    nonPal[word]--;
                    nonPal[temp]--;       
                    cnt += 4;
                }     
            }
        }
            
        for( auto & it: pal ) {
            if( it.second > 1 ) {
                cnt += (it.second)/2 * 4;
                
                if( it.second % 2 == 0 ) it.second = 0 ;
                else it.second = 1;
            }
        }
        
        for( auto it:pal ){
            if( it.second >= 1) {
                cnt += 2;
                break;
            }
        }
        
        return cnt;
        
        
    }
};