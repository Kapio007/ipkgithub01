#include <iostream>
#include <sstream>
#include <algorithm>
#include "input.h"

using namespace std;

int main () {
	string str = read_stream(cin);
	if (check_parentheses(str)==true) {
		cout << "\nWohlgeformter Ausdruck" << endl;
	}else{
        cout<< "\nKein Wohlgeformter Ausdruck"<<endl;
	}

}
