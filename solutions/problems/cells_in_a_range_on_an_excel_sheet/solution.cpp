class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        char fchar = s[0], endChar = s[3];
        int fNum = s[1], endNum = s[4];
        
        vector <string> ret;
        
        for( char i = fchar ; i <= endChar ; i++){
            for( char n = fNum ; n <= endNum ; n++){
                string temp;
                temp.push_back(i);
                temp.push_back(n);
                ret.push_back(temp);
            }
            
        }
        
        return ret;
    }
};