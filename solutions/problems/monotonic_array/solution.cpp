class Solution {
public:

    bool isIncreasing(vector <int> & array) {
        int prev = array[0];
        for(auto val : array) {
            if( val < prev ) return false;
            prev = val;
        }	
        return true;
    }


    bool isDecreasing(vector <int> & array) {
        int prev = array[0];
        for(auto val : array) {
            if( val > prev ) return false;
            prev = val;
        }	
        return true;
    }
    
    
    bool isMonotonic(vector<int>& array) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        if(array.size() < 2 ) return true;	
        return isIncreasing(array) or isDecreasing(array);

    }
};