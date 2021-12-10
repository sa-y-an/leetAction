class Solution {
public:
    int findDuplicate(vector<int>& array) {	
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	for( int i = 0 ; i < array.size() ; i++ ){	
		if(array[abs(array[i])-1] < 0 ) return abs(array[i]);			
		array[abs(array[i])-1] *= -1;
	}
	
	return -1;
        
    }
};