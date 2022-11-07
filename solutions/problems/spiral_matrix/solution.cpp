class Solution {
public:
    


void spiral(vector <vector <int> > & array,vector <int>& ret,int start, int n , int m) {
	
	if( n <= 0 or m <= 0 ) return;

	const int corner = start;
	const int xEnd = start+n-1;
	const int yEnd = start+m-1;

	int x = corner, y = corner;

	y = corner;

	for( x=corner ; x <= xEnd ; x++) {
		ret.push_back(array[y][x]);
	}

	x = xEnd;

	for( y = corner+1 ; y <= yEnd ; y++ ){
		ret.push_back(array[y][x]);
	}

	if( m ==1 or n == 1 ) return;

	y = yEnd;

	for( x = xEnd-1 ; x >= corner ; x--) {
		ret.push_back(array[y][x]);
	}

	x = corner;
	for( y = yEnd-1 ; y > corner ; y--) {
		ret.push_back(array[y][x]);
	}

	spiral(array, ret, corner+1 , n-2 , m-2);

	
}

    
    
vector<int> spiralOrder(vector<vector<int>>& array) {

    vector <int> ret;

    if( array.size() == 0 ) return {};	
    spiral(array,ret, 0 , array[0].size() , array.size() );

    return ret;


}
};