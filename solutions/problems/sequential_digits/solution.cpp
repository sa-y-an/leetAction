class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {


	const int lenLower = int(log10(low)+1) , lenUpper = int(log10(high)+1) ;
	vector <int> ret;

	// cout<<first<<" "<<lenLower<<" "<<lenUpper<<"\n";

	// we loop through digit size to generate all possible digits of a particular length
	for( int digitLen = lenLower ; digitLen <= lenUpper ; digitLen++ ){
		
		 // first digit

		// then we loop through all possible combinations of startdigit
		for(  int startdigit = 1 ; startdigit <= 10-digitLen ; startdigit++){

			int i = digitLen; //
			int retDigit=0;
			int digit = startdigit;

			// elementry loop to generate a sequential digit with a given startdigit
			while( digit <= 9 and i--){
				retDigit += pow(10,i)*digit;
				digit++;
			}

			if( retDigit < low ) continue;
			if( retDigit > high ) return ret;
			ret.push_back(retDigit);
		}

	}

	return ret;
    }
};