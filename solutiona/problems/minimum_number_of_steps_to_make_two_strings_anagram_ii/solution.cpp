class Solution {
public:
    
    void makeStringArr(string &str, vector <int> &cmap){
        for( auto ch : str){
            cmap[ (int) ch-'a']++;
        }
    }

    
    
    int minSteps(string s, string t) {
        
        vector <int> smap(26,0) , tmap(26,0);
        makeStringArr(s,smap);
        makeStringArr(t,tmap);
        
        int cnt = 0;
        for( int i = 0 ; i < 26 ; i++){
            cnt += abs( smap[i]-tmap[i]);
        }
        
        return cnt;
        
    }
};