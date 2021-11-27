class Solution {
public:
    int longestMountain(vector<int>& arr) {

	int max_height = 0 ;
	if ( arr.size() < 3 ) return 0; // for arr size smaller than 3

	int down_height = 0, up_height=0;
	int n = arr.size();

	int i=1;

	while ( i< n ) {


		if( arr[i] == arr[i-1] ) {
			i++;
			continue;
		}

		down_height = 0 , up_height=0;

		while( i < n and  arr[i] > arr[i-1] ) {
			up_height++;
			i++;
		}

		while( i < n and arr[i] < arr[i-1]) {
			down_height++;
			i++;
		}

		

		if( down_height>0 and up_height > 0 ) max_height = max(max_height, (down_height+up_height+1));




	}
	
	return max_height;
        
        
    }
};