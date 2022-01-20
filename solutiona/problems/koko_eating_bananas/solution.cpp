class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    bool isAble(vector<int> &piles, int bph, long int limit){
        
        long int time = 0;
        for( auto pile: piles ){ 
            if( bph >= pile ) time += 1;
            else if(pile%bph == 0 ) time += pile/bph;
            else time += (pile/bph) +1;
        }
                
        return time <= limit;
        
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        if( piles.size() == 1 ) {
            if( h>= piles[0] ) return 1;
            else if(piles[0]%h == 0) return piles[0]/h;
            else return piles[0]/h + 1;
        }
        
        long int low = 1 , high = 1e9+10 ;       
        while(high - low > 1){           
            long int mid = (high+low)/2;
            if( isAble(piles,mid,h) ) {
                high = mid;
            }else {
                low = mid;
            }            
        }
        if( isAble(piles,high,h) ) {
            return high;
        }else{
            return low;
        }
 
    }
};