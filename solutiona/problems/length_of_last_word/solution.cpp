class Solution {
public:
    int lengthOfLastWord(string s) {
       int size = 0;
       int i = 0;
        while( i < s.size() ){
            int currSize = 0;
            while( s[i] != ' ' and i < s.size() ) currSize++ , i++;
            if(currSize) size = currSize;
            i++;
        }
        return size;
    }
};