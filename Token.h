#pragma once
#include "TokenEnum.h"
#include<string>
namespace parser {
	class Token
	{
	public:
		Token();
		~Token();

	private:
		TokenType token_type_;
		std::string content;
	};

}