#include <stdio.h>

int main()
{
	int arr[3];
	printf("Enter 3 numbers:\t");
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	int min = arr[0];
	for(int i=0; i<3; ++i){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	while (!(arr[0] % min == 0 && arr[1] % min == 0 && arr[2] % min == 0)){
		min--;
	}
	printf("%d\n", min);
}

