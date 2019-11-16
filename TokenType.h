#pragma once
namespace parser {
	enum TokenType
	{
		Separator,//����B
		SingleChOperator, //���ַ������(= �� + �� - �� * �� / �� %)������C
		CompOperator,//˫�ַ������(!=��==, <, >�� <=, >=)
		Assign, 
		Val,
		Fun,
		Structure,
		Struct,
		ReservedWord,//������
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