#include "stdio.h"

int main(int argc, char const *argv[])
{
	char a[1000] = {0};
	printf("输入一行文本，以\".\"结尾\n");
	char input;
	int cnt = 0;
	scanf("%c",&input);
	a[cnt] = input;

	while(input!='.'){
		scanf("%c",&input);
		a[++cnt] = input;
	}

	//如果开头输入了空格，对空格进行处理，确保第一个元素不是空格
	int distance;
	for (distance = 0; a[distance]==' '; ++distance);  //distance = 第一个不为空格的元素

	for (int i = 0; ; ++i)
	{
		a[i] = a[i+distance];
		if(a[i] == '.'){
			break;
		}
	}
	// 只有一个'.'不进入循环，不输出任何内容

	for (int i = 0, count = 0; a[i]!='.'; ++i)
	{
		if(a[i]!= ' '){
  			count++;
		}
		if((a[i+1] == ' ' && a[i+2] != ' ') || a[i+1] == '.'){
			printf("%d ",count);
			count = 0;
		}
	}

	printf("\n");

	return 0;
}