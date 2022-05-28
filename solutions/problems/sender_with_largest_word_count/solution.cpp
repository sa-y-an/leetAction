bool comparator (pair <string, int> &a , pair <string , int> &b ){
    
    if( a.second != b.second )
        return a.second > b.second;
    return a.first > b.first;
    
}
class Solution {
public:
    
    
    int getWordCount(string &s){
        int n = s.size();
        int ans = 0, i = 0;
        while( i < n ){
            while( i < n and s[i] != ' ' ){
                i++;
            }
            i++;
            ans++;
        }
        return ans;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
        unordered_map <string, int> cnt;
        int n = messages.size();
        for( int i = 0 ; i < n ; i++){
            cnt[senders[i]] += getWordCount(messages[i]);
        }
        
        vector <pair<string,int>> arr;
        for( auto it : cnt ){
            arr.push_back(it);
        }
        
        sort(arr.begin(),arr.end(), comparator);
        
        return arr[0].first;
        
    }
};