class Solution {
public:
    static bool comparator(const pair<int,int> &a, const pair<int,int> &b){
            return a.second > b.second;
    }
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        vector <pair<int,int>> time;
        int n = plantTime.size();
        for( int i = 0 ; i < n ; i++)
            time.push_back({plantTime[i], growTime[i]});
        sort(time.begin(), time.end(), comparator);
        int result = 0, currPlantTime = 0;
        for( auto &[pt, gt] : time ){
            currPlantTime += pt;
            result = max(result, currPlantTime + gt);
        }
        
        return result;
    }
};