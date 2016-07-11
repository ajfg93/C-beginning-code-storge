#include "stdio.h"
int main(int argc, char const *argv[])
{
	const int BJT = 8;
	int input = 0;
	int hour1;
	int hour2;
	int ones, tens;
	printf("请输入一个时间，格式如\"0930\"（9点30分）\n");
	scanf("%d",&input);
	printf("你输入的时间是%d\n",input);
	hour1 = input / 100;
	ones = input % 100;
	tens = input % 10 - ones;
	if (hour1 < BJT)
	{
		hour2 = 24 - (BJT - hour1);
	}
	else
	{
		hour2 = hour1 - BJT;
	}

	printf("UTC时间是%d%d%d\n",hour2,tens,ones);
	return 0;
}