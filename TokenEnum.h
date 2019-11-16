#pragma once
enum TokenType
{
	Space,//�ո�
	Separator,//�ָ���( ;��{��}��(��) )
	SingleChOperator, //���ַ������(= �� + �� - �� * �� / �� % ��; �� | �� :��!)
	DuoChOperator,//˫�ַ������(:=��!=��==)
	Number,
	Le,
	Ne,
	Ge,
	Lt,
	Gt,
	Eq,
	ReservedWord,//������
	Identifier,
	String,
	Comment,
	Error,
	Other
	
};