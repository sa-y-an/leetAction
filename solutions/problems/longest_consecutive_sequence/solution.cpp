class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
	if(nums.size() < 0 ) return 0;

	unordered_set <int> uset;
	for(auto val:nums) uset.insert(val);

	int max_cnt = 0;
    

	for(auto i:nums) {

		if(uset.find(i-1) != uset.end() ) continue;

		int cnt = 0 ;

		while( uset.find(i) != uset.end() ) {
			cnt++;
			i++;

		} 

		max_cnt = max(max_cnt, cnt);
	}

	return max_cnt;
        
        
    }
};