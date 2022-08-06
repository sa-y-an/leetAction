typedef long long ll;
class Solution {
public:
    
    ll goodPairs(vector <int> &nums){

        unordered_map<ll, ll> umap;
        const int n = nums.size();
        for (ll i = 0; i < n; i++)
            umap[nums[i] - i]++;

        ll res = 0;
        for (auto x : umap) {
            ll cnt = x.second;
            res += ((cnt * (cnt - 1)) / 2);
        }
        return res;
    }
    
    long long countBadPairs(vector<int>& nums) {
        
        ll n = nums.size();
        if( n == 1 )
            return 0;
        n--;
        ll total = ((n)*(n+1))/2;
        ll good = goodPairs(nums);
        
        return total-good;
    }
};