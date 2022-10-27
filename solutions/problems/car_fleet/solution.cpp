class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector <pair<int,int>> vi;
        int n = position.size();
        for( int i = 0 ; i < n ; i++){
            vi.push_back({target-position[i], speed[i]});
        }
        
        sort(vi.begin(), vi.end());
        int ans = 0; float prev = -1;
        
        for( auto &[dist,speed] : vi){
            float curr = (dist*1.0)/(speed*1.0);
            if( prev < curr ) {
                ans++;
                prev = curr;
            }
        }
        
        return ans;
    }
};