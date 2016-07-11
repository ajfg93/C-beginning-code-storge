#include "stdio.h"

int isDelimiter(char ch);

int main(int argc, char const *argv[])
{
	printf("输入一段文章\n");
	int count[11]={0}; //count[1] ＝＝ 含有1个字母的单词的数量
	int word_cnt = 0; //单词数量
	int char_cnt = 0; //单词字母个数

	char ch;
	while((ch=getchar()) != EOF){
		if (isDelimiter(ch))
		{
			if(char_cnt != 0){
				word_cnt++;
				if(char_cnt <= 10){
					count[char_cnt]++;
				}
				char_cnt = 0;
			}
			continue;
		}else{
			char_cnt++;
		}
	}

	printf("%d ",word_cnt);
	for (int i = 1; i < 11; ++i)
	{
		printf("%d",count[i]);
		if(i != 10){
			printf(" ");
		}
	}
	return 0;
}

int isDelimiter(char ch){
	int delimiter = 0;  //notAdelitmer
	switch(ch){
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case '.':
		case '?':
		case '"':
		case '(':
		case ')':
		case ':':
			delimiter = 1;
			break;
	}

	return delimiter;
}