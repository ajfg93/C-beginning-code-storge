#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("请输入一个整数[0,100000]\n");
	int input = 0;
	scanf("%d",&input);
	printf("你输入的数字是%d\n",input);
	int result = 0;
	int count = 0;
	int mutiple = 1;
	int t = 0;

	while(input != 0 ){
		t = input % 10;
		count++;
		if((t+count) % 2 == 0){
			result += mutiple;
		}
		mutiple*= 2;
		input /= 10;
	}

	printf("输入的整数的特征值=%d\n",result);
	return 0;
}