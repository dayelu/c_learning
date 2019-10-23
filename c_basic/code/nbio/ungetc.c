#include <stdio.h>
#include <ctype.h>

int read_int()
{
	int value;
	int ch;
	value = 0;

	/*
		转换从标准输入读入的数字，当我们得到一个非数字的字符时停止。
	*/
	while( (ch = getchar()) != EOF && isdigit( ch ) )
	{
		value *= 10;
		value += ch - '0';
	}
	/*
		把数字字符退回到流中
	*/
	ungetc(ch,stdin);
	return value;
}

int main(int argc, char const *argv[])
{

	read_int();
	return 0;
}