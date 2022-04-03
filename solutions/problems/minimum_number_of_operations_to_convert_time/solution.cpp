class Solution {
public:
    int convert_minutes(string &time){
        int con = 0;
        con += stoi(time.substr(0,2))*60 + stoi(time.substr(3,2));
        return con;
    }
    
    int convertTime(string current, string correct) {
        int start = convert_minutes(current);
        int end = convert_minutes(correct);

        int diff = end - start;
        
        int cnt = 0;
        while( diff-60 >= 0 ){
            diff -= 60;
            cnt++;
        }
        
        while( diff - 15 >= 0 ) diff -= 15 , cnt++;
        while( diff - 5 >= 0 ) diff -= 5 , cnt++;
        while( diff - 1 >= 0 ) diff -=1  , cnt++;
        
        return cnt;
            
    }
};