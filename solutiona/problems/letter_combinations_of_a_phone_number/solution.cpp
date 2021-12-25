class Solution {
public:


void findCombinations(string & str, vector <string> & letterCombinations, vector <string>& keypad, string combinations = ""){

    if( str.empty()){
        letterCombinations.push_back(combinations);
        return;

    }
    else {
        
        int n = str.size()-1;
        int digit = (int) (str[n] - '0' );
        char temp = str[n];
        str.pop_back();

        for(int j = 0 ; j < keypad[ digit ].size() ; j++){
            combinations.push_back( keypad[digit][j] );
            findCombinations(str,letterCombinations,keypad,combinations);
            combinations.pop_back();
        }

        str.push_back(temp);

    }
}

        vector <string> letterCombinations(string digits){
            
            if( digits.empty()) return {};
            
            reverse(digits.begin(), digits.end());
            
            vector <string> combinations;
            vector <string> keypad = {
                "",
                "",
                "abc",
                "def",
                "ghi",
                "jkl",
                "mno",
                "pqrs",
                "tuv",
                "wxyz"
            };


            findCombinations(digits, combinations, keypad);

            return combinations;

        }

};