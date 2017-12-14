#include <sstream>
#include <algorithm>
#include <iterator>

#include "input.h"

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

std::string read_stream(std::istream& input)
{
  std::stringstream s;
  std::copy(
    std::istreambuf_iterator<char>(input),
    std::istreambuf_iterator<char>(),
    std::ostreambuf_iterator<char>(s)
    );
  return s.str();
}


