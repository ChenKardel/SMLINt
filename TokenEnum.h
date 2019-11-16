#pragma once
enum TokenType
{
	Space,//空格
	Separator,//分隔符( ;，{，}，(，) )
	SingleChOperator, //单字符运算符(= ， + ， - ， * ， / ， % ，; ， | ， :，!)
	DuoChOperator,//双字符运算符(:=，!=，==)
	Number,
	Le,
	Ne,
	Ge,
	Lt,
	Gt,
	Eq,
	ReservedWord,//保留字
	Identifier,
	String,
	Comment,
	Error,
	Other
	
};