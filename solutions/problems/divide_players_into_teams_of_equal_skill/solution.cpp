class Solution {
public:
    long long dividePlayers(vector<int>& skills) {
        
        sort(skills.begin(), skills.end());
        int r = skills.size()-1 , l = 0;
        int sum = skills[0] + skills.back();
        long long ans = 0;
        while( l < r ){
            if( skills[l] + skills[r] != sum ) return -1;
            ans += skills[l]*1LL*skills[r];
            l++;
            r--;
        }
        return ans;
    }
};