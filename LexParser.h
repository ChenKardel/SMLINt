#pragma once
#include "TokenType.h"
#include "Token.h"
#include<string>
class LexParser
{
public:
	LexParser();
	~LexParser();
	/*
	 * ½âÎöÒ»¸ö
	 */
	parser::Token parse(std::string str);
private: 
	bool _readNextChar();
	parser::Token _isKeyWord(std::string str);
	void _skipBlank();

};

