const string genes = "ACGT";
class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        unordered_set <string> visited;
        queue <string> q;
        q.push(start);
        visited.insert(start);
        
        for( int level = 1 ; !q.empty() ; level++){
            int sz = q.size();
            for( ; sz-- ; q.pop() ){
                string node = q.front();
                for( int i = 0 ; i < node.size() ; i++){
                    string curr = node;
                    for( char ch : genes){
                        curr[i] = ch;
                        if( !visited.count(curr) and 
                          find(bank.begin(),bank.end(),curr) != bank.end()){
                            if( curr == end) return level;
                            q.push(curr);
                            visited.insert(curr);
                        }
                    }
                }
            }
        }
        return -1;
        
    }
};