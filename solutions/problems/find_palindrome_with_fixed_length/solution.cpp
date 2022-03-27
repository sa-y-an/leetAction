#define ll long long
class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int k) {
        vector <long long> ans;
        
        for(int i = 0 ; i < queries.size() ; i++){
            int n = queries[i];
            
            ll temp = (k & 1) ? (k / 2) : (k/2 - 1);
            ll palindrome = (ll)pow(10, temp);
            
            int totalPossible = palindrome;
            totalPossible = totalPossible*10 - palindrome;
            if( n > totalPossible ) {
                ans.push_back(-1);
                continue;
            }
            
            palindrome += n - 1;
            ll tempAns = palindrome;
        
            
            if (k & 1)
                palindrome /= 10;

            while (palindrome){
                tempAns *= 10;
                tempAns +=  (palindrome % 10);
                palindrome /= 10;
            }
            
            
            ans.push_back(tempAns);

        }
        
        return ans;
    }
};