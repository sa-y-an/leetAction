class Solution {
public:
    int longestMountain(vector<int>& array) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        
        
    if(array.size() < 3) return 0;
        
	int maxPeakHeight = 0;
	int i =1;
    
        
	while( i < array.size() ){
	
    int increment = 0;
    int decrement = 0 ;
        
        
        if( i<array.size() and array[i] == array[i-1] ) {
            i++;
            continue;
        }

     
        while( i < array.size() and array[i] > array[i-1] )	{
            increment++;
            i++;
        }
      
        
        while( i < array.size() and array[i] < array[i-1] )	{
            decrement++;
            i++;
        }

        if( increment > 0  and decrement > 0 ) {
            maxPeakHeight = max(maxPeakHeight, (increment+decrement+1));
        }

    }
        
    return maxPeakHeight;
        
        
    }
};