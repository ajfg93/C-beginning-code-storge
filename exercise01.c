/*
题目内容：

程序每次读入一个正三位数，然后输出逆序的数字。注意，当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
输入格式:
每个测试是一个3位的正整数。

输出格式：
输出逆序的数。

输入样例：
123

输出样例：
321
时间限制：500ms内存限制：32000kb
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int input;
	int output;
	int ones, tens, hundreds;
	printf("输入一个3位的正整数:\n");
	scanf("%d",&input);
	hundreds = input / 100;
	tens = (input - hundreds * 100) / 10;
	ones = (input - hundreds * 100) % 10;
	output = ones * 100 + tens * 10 + hundreds;
	printf("逆序为:%d",output);
	return 0;
}








