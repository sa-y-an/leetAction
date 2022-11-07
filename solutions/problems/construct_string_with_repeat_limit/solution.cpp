class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }    
    
    string repeatLimitedString(string s, int repeatLimit) {
                                                                                            
        map <char,int> freqMap;
        for( auto ch: s) freqMap[ch]++;
        string ans;
        
        while( not freqMap.empty()){
            
            char lexTop = (*freqMap.rbegin()).first;
            int freqTop = freqMap[lexTop];
            
            freqMap.erase(lexTop);
            
            if( ans.back() != lexTop){
                int n = min(freqTop, repeatLimit);
                for( int i = 0 ; i < n ; i++)
                    ans.push_back(lexTop);
                
                freqTop -= n;
                if( freqTop > 0 ) freqMap[lexTop] = freqTop;
            }
            else {
                if( freqMap.empty()) break;
                char lexSecond = (*freqMap.rbegin()).first;
                int freqSecond = freqMap[lexSecond];
                
                freqMap.erase(lexSecond);
                
                ans.push_back(lexSecond);
                freqSecond -= 1;
                
                if( freqSecond > 0 ) freqMap[lexSecond] = freqSecond;
                freqMap[lexTop] = freqTop;
            }
            
        }
        
        return ans;
        
    }
};