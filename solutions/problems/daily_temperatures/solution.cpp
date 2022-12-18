class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector <int> ans(n,0);
        stack <int> s;
        for( int i = 0 ; i < n ; i++){
            while( !s.empty() and temperatures[s.top()] < temperatures[i] ) 
                ans[s.top()] = i, s.pop();
            s.push(i);
        }
        for( int i = 0 ; i < n ; i++){
            if( ans[i] != 0 ) ans[i] -= i;
        }
        return ans;
    }
};