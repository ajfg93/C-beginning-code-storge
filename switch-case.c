#include "stdio.h"
int main(int argc, char const *argv[])
{
	int flag = 0;
	int result;
	printf("请输入一个数字:\n");
	scanf("%d",&flag);
	printf("你输入的数字是%d\n",flag);
	const int input = flag;
	// switch (input){
	// 	case input > 0:
	// 		result = -1;
	// 		break;
	// 	case input == 0:
	// 		result = 0;
	// 		break;
	// 	case input > 0:
	// 		result = 2 * input;
	// 		break;
	// }

	printf("结果=%d",input);
	return 0;
}