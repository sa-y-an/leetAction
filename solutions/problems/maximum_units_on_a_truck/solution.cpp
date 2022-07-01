bool comparator( vector <int> & a, vector <int> &b){
    return a[1] > b[1]; 
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort( boxTypes.begin(), boxTypes.end(), comparator);
        int k = truckSize, ans = 0;
        for( auto &box : boxTypes ){
            int n = box[0], u = box[1];
            if( n <= k ){
                ans += n*u;
                k -= n;
            }else {
                ans += k*u;
                break;
            }   
        }
        return ans;
    }
};