class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
	long long n = nums.size();
	n = 1<<n;
	vector<vector<int>> ret;
	for( long long i = 0 ; i < n ; i++){
		vector <int> temp;
		for( long long j = 10 ; j >= 0 ; j--){
			if( ((i>>j)&1) == 1 ) temp.push_back(nums[j]);
		}
		ret.push_back(temp);

	}

	return ret;        
    }
};