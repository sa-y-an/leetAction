class Solution {
public:
    int rob(vector<int>& array) {
    int n = array.size();
	vector <int> maxSum(n,0);
	if( not n ) return 0;	
	maxSum[0] = array[0];
	
	if( n == 1 ) return array[0];
	
	maxSum[1] = array[1];
	if( n == 2 ) return max(array[1], array[0]);
	
	maxSum[2] = array[2] + maxSum[0];
	
	if( n == 3 ) return max(maxSum[1], maxSum[2]);
	
	for( int i = 3 ; i < n ; i ++ )  {
		maxSum[i] = max(maxSum[i-2],maxSum[i-3])+ array[i];
	}
	
    return *max_element(maxSum.begin(), maxSum.end());
    }
};