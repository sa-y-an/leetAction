class Solution {
public:
    string removeDigit(string number, char digit) {
        
        vector <string> nums;
        for( int i = 0 ; i < number.size() ; i++){
            if( number[i] == digit){
                string temp;
                for( int j = 0 ; j < number.size() ; j++){
                    if( j == i ) continue;
                    temp.push_back(number[j]);
                }
                nums.push_back(temp);
            }
        }
        
        sort( nums.begin(), nums.end());
        return nums.back();
    }
};