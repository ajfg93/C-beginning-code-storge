#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("输入任意个数字（0,100000)，当输入\"-1\"时程序结束\n");
	int input = 0;
	int odd = 0, even = 0;
	scanf("%d",&input);
	while(input != -1){
		if(input % 2 == 0){
			even++;
		}else{
			odd++;
		}
		scanf("%d",&input);
	}

	printf("输入的数字中，共有%d个奇数，%d个偶数\n",odd,even);
	return 0;
}