#include <stdio.h>

int main()
{
	int a = 0;
	printf("Enter a number:\t");
	scanf("%d", &a);
	a |= 1 << 5;
	printf("%d\n", a);
	
}
