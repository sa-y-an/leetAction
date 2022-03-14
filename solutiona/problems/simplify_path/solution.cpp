class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        int i = 0 ;
        const int n = path.size();
        while( i < n ){   
            if( path[i] == '/') {
                if( ans.empty() or ans.back() != '/' ) ans.push_back('/');
                i++;
                string temp;
                while( i < n and path[i] != '/' ) temp += path[i] , i++;

                if( temp == ".") {}
                else if( temp == "..") {
                    if( ans.size() > 1 ){
                        ans.pop_back();
                        while( ans.back() != '/') ans.pop_back();
                    }
                }
                else ans += temp;
            }     
    }
    if( ans.back() == '/' and ans.size() > 1) ans.pop_back();
    return ans;
}
};