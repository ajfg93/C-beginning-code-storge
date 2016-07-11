#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("输入一个整数，我将把他念出来\n");
	int input;
	scanf("%d",&input);
	printf("你输入的整数是%d\n",input);
	if ( input < 0 ){
		printf("fu ");
		input = -input;
	}
	int x = input;
	int mask = 1;
	while( x > 9){
		x/= 10;
		mask*= 10;
	}
	int d;
	while(mask > 0){
		d = input / mask;
		switch(d){
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if ( mask > 9){
			printf(" ");
		}
		input%= mask;
		mask/= 10;
	}
	printf("\n");
	return 0;
}