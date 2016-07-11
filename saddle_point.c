#include "stdio.h"
int main(int argc, char const *argv[])
{
	int matrix[100][100] = {0};
	int n;
	printf("输入方阵的维度及每个元素\n");
	scanf("%d",&n);
	int x,y;
	x = 0;
	y = 0;


	while( x!= n){
		while( y!= n){
			scanf("%d",&matrix[x][y]);
			y++;
		}
		y = 0;
		x++;
	}
	int line_max;
	int line_num = 0;
	int col_num = 0;
	int i,j;
	int hasSaddlePoint = 1;

	for (i = 0, j = 0; i < n; ++i)
	{
		line_max = matrix[i][j];
		for (j = 1; j < n; ++j)
		{
			if(matrix[i][j] > line_max){
				line_max = matrix[i][j];
				col_num = j;    //有一个行最大数的列id
				line_num = i;
			}
		}

		//遍历列
		for (int m = 0 ; m < n; ++m)
		{
			if(m!=line_num && matrix[m][col_num] < line_max){
				hasSaddlePoint = 0;   //证伪
				break;
			}
		}

		if(hasSaddlePoint){
			break;
		}
   									 //要想好什么变量要在循环最后重置
		j = 0;
		hasSaddlePoint = 1;
	}

	printf("%d %d\n",line_num,col_num);


	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		printf("%d ",matrix[i][j]);
	// 	}
	// 	printf("\n");
	// }
	return 0;
}