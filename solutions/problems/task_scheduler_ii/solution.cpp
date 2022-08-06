typedef long long ll;
class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        
        ll n = tasks.size();
        unordered_map <ll,ll> umap;
        ll ans = n, curr = 0;
        vector <ll> dp(n,0);
        
        for( int i=0 ; i<n; i++){
            curr++;
            if( umap.count(tasks[i]) ){
                ll currTime=curr-dp[umap[tasks[i]]]-1;
                curr += max(0LL , space - currTime);
                umap[tasks[i]] = i;                
            }
            else umap[tasks[i]] = i;
            dp[i] = curr;
        }
        return dp[n-1];
    }
};