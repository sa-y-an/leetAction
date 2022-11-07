class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        long low = 0 , high = letters.size()-1;
        char res = ' ';
        
        while( low <= high ){
            long mid = (low+high)/2;
            if( letters[mid] > target ){
                res = letters[mid];
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        
        if( res != ' ' ) return res;
        target = 'Z';
        low = 0 , high = letters.size()-1;
        
        while( low <= high ){
            long mid = (low+high)/2;
            if( letters[mid] > target ){
                res = letters[mid];
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        
        return res;

        
    }
};