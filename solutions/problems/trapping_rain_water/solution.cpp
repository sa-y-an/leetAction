class Solution {
public:
    int trap(vector<int>& height) {
        
	// solution
	int n = height.size();
	vector <int> leftHeights(n,0);
	vector <int> rightHeights(n,0);


	int leftMax = height[0] ;
	int righMax = height[n-1] ;

	

	for( int i= 1 ; i < n ; i++ ) {
		
		if(height[i] > leftMax ) leftMax = height[i];
		leftHeights[i] = leftMax;

	}

	
	for( int i=n-2   ; i >= 0 ; i--  ) {

		if( height[i] > righMax ) righMax = height[i];
		rightHeights[i] = righMax;
	}

	int tempHeight = 0 , maxArea = 0 ;

	for( int i = 0 ; i < n ; i++ ) {


		tempHeight = min(leftHeights[i], rightHeights[i]) - height[i];
		if(tempHeight>0) maxArea += tempHeight;
		

	}


	
	return maxArea;
        
    }
};