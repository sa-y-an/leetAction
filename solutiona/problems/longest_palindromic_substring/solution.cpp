class Solution {
public:
    string longestPalindrome(string s) {
        
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

        
	if( s.size()<2 ){
		return s;
	}

	int i=0;
	int l,r;
	string substr="";
	int max_len=0;



	for( i =0 ; i < s.size() ; i++){

		int t_len=0;
		

		//  check for odd palindromes
		l = i , r = i;
		
		while( l>=0 && r<s.size() && s[l] == s[r] ){

			t_len = r-l+1;

			if( t_len > max_len ){
				max_len = t_len;
				substr = s.substr(l,t_len);
			}

			l--, r++;
		}

		// check for even palindromes

		l = i , r = i+1;
		
		while( l>=0 && r<s.size() && s[l] == s[r] ){

			t_len = r-l+1;

			if( t_len > max_len ){
				max_len = t_len;
				substr = s.substr(l,t_len);
			}

			l--, r++;
		}




	}

	return substr;
        
    }
};