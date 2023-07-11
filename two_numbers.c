#include <stdio.h>

int main()
{
	double a = 0;
	double b = 0;
	printf("Enter first number:\t");
	scanf("%lf", &a);
	printf("Enter second number:\t");
	scanf("%lf", &b);
	if(a > b){
	printf("Number %.1lf is greater then number %.1lf.\n", a, b);
	}
	else{
	printf("Number %.1lf is greater then number %.1lf.\n", b, a);
	}
}
