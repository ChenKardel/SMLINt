#include "Parser.h"
#include <fstream>
#include <iostream>
#include <sstream>

int main()
{
	parser::Parser * _p = new parser::Parser;
	std::ifstream ifile;
	
	ifile.open("test.sml", std::ios::in);

	std::ostringstream buf;
	char ch;
	while (buf && ifile.get(ch))
	buf.put(ch);
	std::cout << buf.str();
	system("pause");
}
