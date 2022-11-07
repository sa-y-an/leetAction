class Solution {
public:

    Solution(){
            ios_base::sync_with_stdio(false);
            cin.tie(0);
            cout.tie(0);        
        }

    
    class rectangle{
    
    public:
        
        int x1;
        int x2;
        int y1;
        int y2;
        
        rectangle( vector <int> coordinates ) {
            
            x1 = coordinates[0];
            y1 = coordinates[1];
            x2 = coordinates[2];
            y2 = coordinates[3];            
            
        }
        
        
        bool checkContaintment(rectangle rect) {
            
        // bottom left is contained in this 
            
            // x inequality 
            if( rect.x1 >= this->x1 and this->x2 > rect.x1 ) {
                if( rect.y1 >= this->y1 and this->y2 > rect.y1 ) {
                    if( rect.x2 > this->x1 and rect.y2 > this->y1 ) {
                        return true;  
                    }
                    
                }
            }    
            
            // top right is contained in this
            
            if ( rect.x2  > this->x1 and rect.x2 <= this->x2 ) {
                if( rect.y2 > this->y1 and rect.y2  <= this->y2 ) {
                    if( rect.x1 < this->x2 and rect.y1 < this->y2 ){
                        return true;
                    }
                }
            }
            
            
            // check for midpoint 
            
            int xmid = (rect.x1+rect.x2)/2;
            int ymid = (rect.y1+rect.y2)/2;
            
            
            if( xmid > this->x1 and ymid > this->y1 ) {
                if( xmid < this->x2 and ymid < this->y2 ) {
                    return true;
                }
            }
            
            // top left
            //  rect.x1, rect.y2
            
            
            if( rect.x1 > this->x1 and rect.y2 > this->y1 ) {
                if( rect.x1 < this->x2 and rect.y2 < this->y2 ) {
                    return true;
                }
            }
            
            
            return false;
            
            
        }
        
    };
    
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        rectangle rect1(rec1), rect2(rec2);
        
        if( rect1.checkContaintment(rec2) or rect2.checkContaintment(rec1)  ) return true;
        return false;
        
        // x co-ordinates 
    }
};