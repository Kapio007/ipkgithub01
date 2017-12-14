#include "lint.cc.h"
#include <iostream>

using namespace std;

bool check_parentheses (string symbols) {
	int size = symbols.size();
	int numparantheses = 0;
	for (int n=0; size>n; n++) {
		if (symbols[n]== '(') {
			numparantheses++;
		}
		if (symbols[n]== ')') {
			numparantheses--;
		}
	}
	if (numparantheses == 0) {
		return true;
	}
	else {
		return false;
	}
}
