class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector <string> order;
        for( int i = 1 ; i <= n ; i++ ) order.push_back(to_string(i));
        sort(order.begin(), order.end());
        vector <int> ret;
        for( auto num : order) ret.push_back(stoi(num));
        return ret;
    }
};