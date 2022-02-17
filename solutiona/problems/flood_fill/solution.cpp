class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    void dfs(vector<vector<int>>& image, int y, int x, int initialColor, int newColor){
        
        if( y >= image.size() or x >= image[0].size() ) return;
        if( y < 0 or x < 0 ) return ;
        if( image[y][x] != initialColor ) return;
        
        image[y][x] = newColor;
        
        dfs(image,y-1,x,initialColor,newColor);
        dfs(image,y,x-1,initialColor,newColor);
        dfs(image,y+1,x,initialColor,newColor);
        dfs(image,y,x+1,initialColor,newColor);
        
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int initialColor = image[sr][sc];
        if( initialColor != newColor)
            dfs(image,sr,sc,initialColor,newColor);
        return image;
        
    }
};