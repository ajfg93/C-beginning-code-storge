#include "stdio.h"


int main(int argc, char const *argv[])
{
	char ch;
	while((ch=getchar()) != EOF){
		printf("%c",ch);
	}

	return 0;
}

