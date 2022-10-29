class Solution {
public:
    
    void reverse(string &s){
        int i = 0 , j = s.size()-1;
        while( i < j ){
            swap(s[i],s[j]);
            i++;
            j--;
        }
            
    }
    
    string reverseWords(string s) {
        
        string ans;
        int n = s.size();
        int i = 0;
        while( i < n ){
            string temp;
            while(i < n and s[i] != ' '){
                temp += s[i];
                i++;
            }
            reverse(temp);
            ans += temp;
            if( i < n ) ans += " ";
            i++;
        }
        return ans;
    }
};