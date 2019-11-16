# README

## 项目目的
做一个SML的解释器
11.16的进度为做完
func、structure、四折运算、联立声明的功能

## 文法规定
赋值: val ID = REAL|STRING|EXPR;

函数: fun square IDENTIFIER(IDENTIFIER: TYPE) = EXPR;

函数内赋值: 
```
let D in E end;
local D1 in D2 end：
```
structure ID = struct

联立声明and

val Id1 = E1 and ... and Idn=En

sig

## 标识符(保留字)
- abstype
- and
- andalso
- as
- case
- datatype
- do
- else
- end
- eqtype
- exception
- fn
- fun
- functor
- handle
- if
- in
- include
- infix
- infixr
- let
- local

	

