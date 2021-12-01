class Solution {
public:
    bool isSubsequence(string sequence, string array) {
    
    int l=0,r=0;
	
	if( sequence.size() > array.size()) return false;
	int counter = 0 ;
	
	while(l < array.size() and r < sequence.size() ){

		while( l < array.size() and array[l] != sequence[r] ){
			l++;
		}
		
		if( l >=array.size() ) break;
		
			cout<<l<<" "<<r;
			counter++;
			r++; l++;
	
	}
	
	if( counter != sequence.size() ) return false;
    return true;
    }        
        
};