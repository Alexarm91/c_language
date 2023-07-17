#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	do{
	printf("Please enter a number greater than 12\t");
	scanf("%d", &num);}
	while(num < 12);
	while(num){
	sum = sum + num % 10;
	num = num / 10;
	}
	printf("%d\n", sum);

}

