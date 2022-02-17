#include "ReadNames.h"

#include <string>
#include <fstream>

string ReadNames::readNames() {
	ifstream f("README.md");
	
	string tmp;
	string output;
	while(getline(f, tmp))
		output += (tmp + '\n');

	return output;
}
