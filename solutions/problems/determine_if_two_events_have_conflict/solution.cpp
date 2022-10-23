class Solution {
public:
    
    int time2minutes(string &event){
        return stoi(event.substr(0,2))*60 + stoi(event.substr(3,2));
    }
    
    
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        
        vector <int> t1(2,0) , t2(2,0);
        t1[0] = time2minutes(event1[0]);
        t1[1] = time2minutes(event1[1]);
        
        t2[0] = time2minutes(event2[0]);
        t2[1] = time2minutes(event2[1]);
        
        
        if ( t1[0] < t2[0] )
            return t1[0] == t2[0] or t1[1] >= t2[0];
        else
            return t1[0] == t2[0] or t2[1] >= t1[0];    
        
    }
};