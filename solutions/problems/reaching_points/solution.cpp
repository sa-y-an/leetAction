class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        
        while( ty > sy and tx > sx ){
            if( ty > tx ) ty %= tx;
            else tx %= ty;
        }
        
        return ( ty == sy and sx <= tx and (tx-sx)%ty == 0  ) or 
            ( tx == sx and sy <= ty and (ty-sy)%tx == 0 );
    }
};