# README
## ���
��readme��Ϊ�˱�ʾsyntax����
��Ҫ����ʹ���ַ����﷨����
## ʹ���ַ�
LL(1)
## �﷨����

//assign variable

A -> Val Identifier Assign T|F|Identifier Seperator

T -> Real|String|Int

F -> T|Identifier Duo F   

F -> LeftPar F RightPar