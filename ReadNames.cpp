#include "ReadNames.h"

#include <string>
#include <fstream>

string ReadNames::readNames() {
	ifstream f("README.md");
	
	string tmp;
	string output;
	while(f >> tmp)
		output += (tmp +\n);

	return output;
}
