class Solution {
public:
    bool isPossible(vector<int>& target) {
        long total = accumulate(target.begin(),target.end(),0*1LL);
        priority_queue <int> pq( target.begin(), target.end());
        
        while( pq.top() != 1 ){
            long maxi = pq.top();
            long left = total-maxi;
            
            if( left == 1 || maxi == 1 )
                return true;
            
            if( maxi < left || left == 0 || maxi%left == 0 )
                return false;
            
            int newElt = maxi%left;
            total = left + newElt;
            pq.pop();
            pq.push(newElt);
        }
        
        return true;
    }
};