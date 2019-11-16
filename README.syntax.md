# README
## 简介
本readme是为了表示syntax进度
主要介绍使用手法和语法规则
## 使用手法
LL(1)
## 语法规则

//assign variable

A -> Val Identifier Assign T|F|Identifier Seperator

T -> Real|String|Int

F -> T|Identifier Duo F   

F -> LeftPar F RightPar