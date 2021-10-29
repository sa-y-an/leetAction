class Solution {
public:
    string interpret(string command) {

	// string str = command;
    int i = 0 ;
	string str_store ;
	for( ; i < command.size(); i++ ) {
		if (command[i] == 'G') {
			str_store.push_back('G');
		}
		else {
			if( command[i+1] == ')' ){
				str_store.push_back('o');
				i++;
			}
			else{
				str_store.push_back('a');
				str_store.push_back('l');
				i += 3;
			}
		}

	}

	return str_store;
        
    }
};