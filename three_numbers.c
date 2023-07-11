#include <stdio.h>

int main()
{
	double arr[3];
	printf("Enter three numbers:\t");
	scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);
	double max =arr[0];
	for (int i=1; i<3; ++i){
	if (arr[i] > max){
	max = arr[i];
	}
	}
       	for(int j=1; j<3; ++j){
	if (arr[0] == arr[j] || arr[1] == arr[2]){
	printf("%.1lf\n", max);
	break;
	}
	}			       
}
