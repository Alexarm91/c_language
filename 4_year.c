#include <stdio.h>

int main()
{
	int year = 0;
	printf("Enter a year:\t");
	scanf("%d", &year);
	if(year % 4 == 0){
		printf("%d year is leap\n", year);
	}
	else{
		printf("%d year is not leap\n", year);
	}
	
}
