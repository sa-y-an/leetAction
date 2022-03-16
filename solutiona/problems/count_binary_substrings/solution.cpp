class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt = 0, c0 = 0 , c1= 0, i = 0;
        const int n = s.size();
        while( i < n ){
            while( i < n and s[i] == '0' ) c0++, i++;
            cnt += min(c0,c1);
            c1 = 0;
            while( i < n and s[i] == '1') c1++ , i++;
            cnt += min(c0, c1);
            c0 = 0;           
        }
        
        return cnt;
    }
};