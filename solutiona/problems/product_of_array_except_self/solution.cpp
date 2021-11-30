class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
	int n = nums.size();
	vector <int> op(n,1), pUpto(n,1), pBefore(n,1);

	for(int i = 1 ; i < n ; i++ )	pUpto[i] = pUpto[i-1]*nums[i-1];
	for(int i = n-2 ; i >=0 ; i--)	pBefore[i] = pBefore[i+1]*nums[i+1];
	for (int i = 0; i < n; ++i) op[i] = pBefore[i]*pUpto[i];
	
	return op;
        
    }
};