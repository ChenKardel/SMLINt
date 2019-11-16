#pragma once
namespace parser {
	enum TokenType
	{
		Separator,//代号B
		SingleChOperator, //单字符运算符(= ， + ， - ， * ， / ， %)，代号C
		CompOperator,//双字符运算符(!=，==, <, >， <=, >=)
		Assign, 
		Val,
		Fun,
		Structure,
		Struct,
		ReservedWord,//保留字
		Identifier,
		String,
		Real,
		Int,
		Error,
		Tuple,
		End,
		LeftPar,
		RightPar
	};
}