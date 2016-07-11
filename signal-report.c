#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("输入信号报告代码: ［11，59］\n");
	int signal_code = 0;
	scanf("%d",&signal_code);
	printf("你输入的信号代码是%d\n",signal_code);
	int strength;
	int readability;
	strength = signal_code % 10;
	readability = signal_code / 10;
	switch(readability){
		case 1:
			printf("Faint signals, barely perceptible, ");
			break;
		case 2:
			printf("Very weak signals, ");
			break;
		case 3:
			printf("Weak signals, ");
			break;
		case 4:
			printf("Fair signals, ");
			break;
		case 5:
			printf("Fairly good signals, ");
			break;
		case 6:
			printf("Good signals, ");
			break;
		case 7:
			printf("Moderately strong signals, ");
			break;
		case 8:
			printf("Strong signals, ");
			break;
		case 9:
			printf("Extremely strong signals, ");
			break;

	}

	switch(strength){
		case 1:
			printf("Unreadable.");
			break;
		case 2:
			printf("Barely readable, occasional words distinguishable.");
			break;
		case 3:
			printf("Readable with considerable difficulty.");
			break;
		case 4:
			printf("Readable with practically no difficulty.");
			break;
		case 5:
			printf("Perfectly readable.");
			break;
	}

	printf("\n");
	return 0;
}