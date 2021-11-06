class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
     unordered_map <int, int> s;

	   for( int i=0 ; i < nums.size() ; i++ ) {

		auto it = s.find( target-nums[i] );

		if(it == s.end() ){
			s.insert({nums[i],i});
		}
		else{

			vector <int> ret = { s[target-nums[i]] , i };
      		return ret;
		}
	}

	vector <int> r(2,-1);

	return r;
        
    }
};