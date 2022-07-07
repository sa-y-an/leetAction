class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map <char,int> mpp;
        for( auto ch : s )
            mpp[ch]++;
        vector <int> freq;
        for( auto &[p,q] : mpp)
            freq.push_back(q);
        
        sort(freq.begin(),freq.end(), greater <int> ());
        
        int prev = s.size()+1;
        int ans = 0;
        for( int curr : freq){
            if( prev == 0 ){
                ans += curr;
                continue;
            }
            else if( curr >= prev){
                int shouldBe = prev-1;
                int diff = curr-shouldBe;
                ans += diff;
                curr -= diff;
            }
            prev = curr;
        }
        
        return ans;
        
    }
};