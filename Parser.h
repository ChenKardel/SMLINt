#pragma once
#include <string>
namespace parser {
	class Parser
	{
	public:
		Parser();
		bool parser(std::string code);
		~Parser();
	};

}