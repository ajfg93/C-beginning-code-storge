#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("输入两个整数m和n[0,200]，计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。\n");
	int left, right;
	scanf("%d %d",&left,&right);
	int t;
	if(left > right){
		t = left;
		left = right;
		right = t;
	}
	printf("你输入的两个整数是%d %d \n",left,right);
	int cnt = 0;
	int ret = 0;
	int p = 2;
	int isPrime = 1;
	while( cnt < right ){
		for (int i = 2; i < p; ++i)
		{
			if( p%i==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime){
			cnt++;
			if(cnt >= left){
				ret+= p;
			}
		}else{
			isPrime = 1;
		}
		p++;
		// printf("p=%d,cnt=%d,ret=%d\n",p,cnt,ret);
	}
	printf("结果是:%d\n",ret);
	return 0;
}