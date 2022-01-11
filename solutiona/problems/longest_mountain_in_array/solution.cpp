class Solution {
public:
    int longestMountain(vector<int>& nums) {
		
	int maxMountain = 0 ;
	int i = 0 ;
	while( i+1 < nums.size()){

		int inc = 0 , dec = 0;
		while( i+1 < nums.size() and  nums[i+1] > nums[i] ){
			inc++;
			i++;
		}
		while( i+1 < nums.size() and nums[i+1] < nums[i] ){
			dec++;
			i++;
		}
		// cout<<i<<" "<<inc<<" "<<dec<<endl;
		if( inc > 0  and dec > 0 ) {
			maxMountain = max(maxMountain, inc+dec+1);
		}
		if( inc == 0 and dec == 0 ){
			i++;
		}

	}
	
	return maxMountain;
    }
};