class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    int maxDistToClosest(vector<int>& seats) {
        int leftFilled = INT_MIN, rightFilled = INT_MAX ;
        int maxDistance = INT_MIN;
        
        for( int i = 0 ; i < seats.size() ; i++ ){
            
            if( seats[i] == 1 and leftFilled == INT_MIN ){
                maxDistance = max(maxDistance, i);
                leftFilled = i;
                continue;
            }
            if( seats[i] == 1 and rightFilled == INT_MAX ){
                rightFilled = i;
                maxDistance = max(maxDistance, (rightFilled-leftFilled)/2 );
                continue;
            }
            if( seats[i] == 1 ){
                leftFilled = rightFilled;
                rightFilled = i;
                maxDistance = max( maxDistance, (rightFilled-leftFilled)/2 );
            }
            
        }
        
        if( rightFilled == INT_MAX ) {
            maxDistance = max(maxDistance,(int) seats.size()-leftFilled-1);
        }
        
        if( rightFilled != seats.size()-1 ){
            maxDistance = max(maxDistance,(int) seats.size()-rightFilled-1);
        }
        
        return maxDistance;
    }
};