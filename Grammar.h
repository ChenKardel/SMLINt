#pragma once
#include <string>
#include "TokenType.h"
#include <vector>
#include "Token.h"

//11.16�����������㣬�����ͽṹ��
//11.16
namespace parser {

	class Expr
	{
	public:
		parser::TokenType left;
		std::vector<parser::TokenType> rights;
	};

	class Grammar
	{
	public:
		Grammar();
		bool ll1_analysis(std::vector<parser::Token> _input);
		~Grammar();
	};
	

}