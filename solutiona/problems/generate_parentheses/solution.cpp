class Solution {
public:

Solution(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);        
}

   
void genP( vector <string> & parenthesis,int open,int close, string combination = ""){

	if( not open and not close ) {
		parenthesis.push_back(combination);
		return;
	}

	else {
		if( open > 0 ) {
			combination.push_back('(');
			genP(parenthesis, open-1, close, combination);
			combination.pop_back();
		}

		if( close > 0 and open < close ){
			combination.push_back(')');
			genP(parenthesis,open, close-1,combination);
			combination.pop_back();
		}

	}


}


vector <string> generateParenthesis( int n ){

	vector <string> parenthesis;
	genP(parenthesis,n,n);

	return parenthesis;

}

};