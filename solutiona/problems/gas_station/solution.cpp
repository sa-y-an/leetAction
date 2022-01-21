class Solution {
public:
Solution(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);        
}

    
    
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	int n = gas.size();
	vector <int> gradient(n,0);
	for( int i = 0 ; i < n ; i++ ){
		gradient[i] = gas[i] - cost[i];
	}

	if(accumulate(gradient.begin(), gradient.end(),0) < 0 ) return -1;

	for(int i = 0 ; i < n ; i++ ){
	    gradient.push_back(gradient[i]);
	}
	    
	n = gradient.size();
	    
	int l = 0 , r = 0 , maxLen = 0, currSum = 0, count = 0 ;

	while(r < gradient.size() ){
		
	    count = 0;
	    currSum = 0 ;

		while( r < n and ( (currSum+gradient[r]) >= 0) ){
			currSum += gradient[r];
	        count++;

	        if( maxLen < count ) {
				maxLen = count;
				l = r-count+1;
			}
			if(maxLen == n/2 ) return l;

			r++;

		}		

		while( r < n and gradient[r] < 0) r++;	
	}
	return -1;
}
 
    
};