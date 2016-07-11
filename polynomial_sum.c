#include "stdio.h"

void polynomial_sum(int *polyA, int *polyB, int *ret);

int main(int argc, char const *argv[])
{
	int a[101] = {0};
	int b[101] = {0};
	printf("输入各次幂与指数\n");
	int inputA,inputB;
	scanf("%d",&inputA);
	while(inputA != 0){
		scanf("%101d",&a[inputA]);
		scanf("%d",&inputA);
	}
	scanf("%101d",&a[inputA]);

	scanf("%d",&inputB);
	while(inputB != 0){
		scanf("%101d",&b[inputB]);
		scanf("%d",&inputB);
	}
	scanf("%101d",&b[inputB]);

	int result[101]={0};
	int t=0;
	polynomial_sum(a,b,result);
	for (int i = 101; i > 1 ; i--)
	{
		t = result[i];
		if(t != 0){
			printf("%dx%d+",t,i);
		}
	}

	if(result[1] != 0){
		printf("%dx+",result[1]);
	}

	if(result[0] != 0){
		printf("%d",result[0]);
	}
	return 0;
}


void polynomial_sum(int *polyA, int *polyB, int *ret){
	for (int i = 0; i < 101; ++i)
	{
		ret[i] = polyA[i] + polyB[i];
	}
}
