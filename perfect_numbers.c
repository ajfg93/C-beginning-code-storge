#include <stdio.h>

void exchange(int *left,int *right);
int isPerfectNum(int number);

int main(int argc, char const *argv[])
{
	printf("输入两个正整数m和n, 1<=n<m<=1000,将输出[n,m]内所有完数\n");
	int left,right;
	scanf("%d%d",&left,&right);
	exchange(&left,&right);
	printf("你输入的两个数是%d,%d\n",left,right);


	for(int i = left; i <= right ; i++){
		if(isPerfectNum(i)){
			printf("%d ",i);
			if(hasPerfectNum == 0){
				hasPerfectNum = 1;
			}
		}
	}

	//其间所有的完数，以空格分隔，最后一个数字后面没有空格。如果没有，则输出一个空行。
	//将所有完数放进一个数组，用数组来完成格式要求

	return 0;
}

void exchange(int *left,int *right){
	int t;
	if(*left > *right){
		t = *left;
		*left = *right;
		*right = t;
	}
}

int isPerfectNum(int number){
	int perfectNum = 1;
	int sum = 1;
	if (number == 1){
		perfectNum = 0;
	}else{
	for(int i=2; i < number; i++ ){
		if( number % i == 0 ){
			sum+= i;
		}
		if( sum > number){
			perfectNum = 0;
			break;
		}
	}
	if (sum < number){
		perfectNum = 0;
	}
	}

	return perfectNum;
}

