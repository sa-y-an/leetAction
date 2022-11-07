class Solution {
public:
    int titleToNumber(string columnTitle) {
        int acc = 0, k=0;
        for( int i = columnTitle.size()-1 ; i >= 0 ; i--)
            acc += (columnTitle[i]-'A'+1)*pow(26,k), k++;
        return acc;
    }
};