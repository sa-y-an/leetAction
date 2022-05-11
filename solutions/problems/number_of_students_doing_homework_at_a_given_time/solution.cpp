class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int cnt = 0, i = 0 , n = startTime.size();
        for( int i = 0 ; i < n ; i++){
            if( startTime[i] <= queryTime and queryTime <= endTime[i]) cnt++;
        }
        return cnt;
    }
};