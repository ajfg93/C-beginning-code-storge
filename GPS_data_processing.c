#include "stdio.h"
#include "math.h"

int char0x_to_int(char, int);

int main(int argc, char const *argv[])
{
	const int msgLength = 1001;
	char GPS_raw[msgLength] = {0};
	char input;
	scanf("%c",&input);
	int m = 0;
	while(input!='D'){
		GPS_raw[m] = input;
		scanf("%c",&input);
		m++;
	}
	GPS_raw[m] = input;
	// printf("%s\n",GPS_raw);
 	char GPS_info[msgLength] = {0};
 	int i;
 	for (i = msgLength-1 ; GPS_raw[i] != '$'; i--); //i == '$'的index
 	int j = 0;
 	while(GPS_raw[i] != '\0'){
 		GPS_info[j] = GPS_raw[i];
 		j++;
 		i++;
 	}

 	// printf("%s\n",GPS_info);

 	char x1, x2;
 	for (int i = 0; GPS_info[i]!='D'; ++i)
 	{
 		if(GPS_info[i] == '*'){
 			x1 = GPS_info[i+1];
 			x2 = GPS_info[i+2];
 			break;
 		}
 	}

 	// printf("%c%c here1\n",x1,x2);

 	//转16进制
 	int y1,y2;
 	y1 = char0x_to_int(x1,1);
 	y2 = char0x_to_int(x2,0);

 	// printf("y1=%d,y2=%d\n",y1,y2);
 	int checkDigt = y1 + y2;

 	// printf("%d\n", checkDigt);

 	int andOpertaion = GPS_info[1] ;
 	int cnt = 0;
 	for (int i = 2; GPS_info[i] != '*'; ++i)
 	{
 		andOpertaion^= GPS_info[i];
 		if(GPS_info[i] == 'A'){
 			cnt++;
 		}
 	}

 	// printf("%d\n",andOpertaion);
 	// 如果定位了，那应该有两个A

 	//丑陋的格式输出算法
 	char time[7] = {0};
 	if(cnt == 2 && andOpertaion == checkDigt){
 		for(int i = 7, j = 0; i < 13 ;i++, j++){
 			time[j] = GPS_info[i];
 		}
 	}

 	int hour = (time[0]-48)*10 + (time[1]-48);
 	hour+= 8;
 	if(hour > 24){
 		hour-= 24;
 	}

 	time[0] = hour/10 + 48;
 	time[1] = hour%10 + 48;

 	for (int i = 0; time[i]!='\0'; ++i)
 	{
 		printf("%c",time[i]);
 		if(i==1 || i==3){
 			printf(":");
 		}
 	}
 	printf("\n");
	return 0;
}

int char0x_to_int(char c, int index){
	int x;
	int mutiplier = pow(16,index);
	switch(c){
		case '0':
		x = 0;
		break;
		case '1':
		x = 1;
		break;
		case '2':
		x = 2;
		break;
		case '3':
		x = 3;
		break;
		case '4':
		x = 4;
		break;
		case '5':
		x = 5;
		break;
		case '6':
		x = 6;
		break;
		case '7':
		x = 7;
		break;
		case '8':
		x = 8;
		break;
		case '9':
		x = 9;
		break;
		case 'A':
		x = 10;
		break;
		case 'B':
		x = 11;
		break;
		case 'C':
		x = 12;
		break;
		case 'D':
		x = 13;
		break;
		case 'E':
		x = 14;
		break;
		case 'F':
		x = 15;
		break;
	}

	return x*mutiplier;
}
