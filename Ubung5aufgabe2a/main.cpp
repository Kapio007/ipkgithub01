#include <iostream>
#include "lint.cc.h"
using namespace std;

int main() {
	string test = "(Hello))";
	if (check_parentheses(test)==true) {
		cout << "Wohlgeformter Ausdruck" << endl;
	}else {
	cout << "Kein Wohlgeformter Ausdruck"<< endl;
	}
}
