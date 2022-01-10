class Solution {
public:
    // Solution(){
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(0);
    //     cout.tie(0);        
    // }

    
    
string decode( string str){

    string ret;

    for( int i = 0 ; i < str.size() ; i++){

        if(  str[i] < '0' or str[i] > '9' ) ret.push_back(str[i]);
        else {
            string inside;
            string mult;
            while(i < str.size() and ( str[i] >= '0' and str[i] <= '9' )) {
                mult.push_back(str[i]);
                i++;
            }

            int m = stoi(mult);


            int open = 1, close = 0;

            i += 1 ;
            while( i < str.size() and  open > close ){

                if( str[i] == '[' ) open++;
                if( str[i] == ']' ) close++;
                inside.push_back(str[i]);
                i++;

            }
            inside.pop_back();
            i -= 1;
            string mid = decode(inside);
            while(m--) ret += mid;
        }
    }

    return ret;

}

    
string decodeString(string & s) {          
    return decode(s);
}

};