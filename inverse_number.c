#include "stdio.h"

//与第一周编程题相同
int main(int argc, char const *argv[])
{
	printf("输入一个正三位数\n");
	int input;
	scanf("%d",&input);
	printf("你输入的数是%d\n",input);
	int reverse = 0;
	int t;
	while( input > 0){
		t = input % 10;
		reverse = reverse*10 + t;
		input/=10;
	}
	// printf("逆序后的数为%d\n",reverse);

	int output = 0 ;
	while ( reverse > 0){
		output = reverse % 10;
		printf("%d", output);
		reverse/=10;
	}

	printf("\n");
	return 0;
}