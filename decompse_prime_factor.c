#include <stdio.h>

int isPrime(int number);

int main(int argc, char const *argv[])
{
	printf("输入一个[2,100000]范围内的整数:\n");
	int number;
	scanf("%d",&number);
	printf("你输入的整数是%d\n",number);
	printf("%d=",number);

	if(isPrime(number)){
		printf("%d",number);
	}else{
		int remainder = 0; //余数
		int quotient = 0;  //商
		int i;
		int prime;
		for(i = 2; i < number ;){
			if(isPrime(i)){
				prime = i;
				remainder = number % prime;
				if(remainder == 0){
					printf("%dx",prime);
					quotient = number / prime;
					if(isPrime(quotient)){
						printf("%d",quotient);
						i++;   					//i++写在这里
						break;
					}else{
						i = 2;					 //重置循环
						number = quotient;
					}
				}
			}

		}
	}
	printf("\n");


	return 0;
}

int isPrime(int number){
	int prime = 1;
	if(number == 1 || ((number%2 == 0) && number !=2)){
		prime = 0;    //isNot a prime
	}else{
		for(int i=2;i < number; i++){
			if(number%i == 0){
				prime = 0;  //isNot a prime
				break;
			}
		}
	}

	return prime;
}