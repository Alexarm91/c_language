#include <stdio.h>

int main()
{
	char let = 0;
	do{
	printf("Enter a letter:\t");
	scanf(" %c", &let);
	}
	while (let < 'A' || let > 'Z' && let < 'a' || let > 'z');
	if (let == 'a' || let == 'A' || let == 'e' || let == 'E' || let == 'i' || let == 'I' || let == 'u' || let == 'U' || let == 'o' || let == 'O'){
	printf("Your letter is vowel.\n");
	}
	else{
	printf("Your letter is not vowel.\n");	
	}
}





/*#include <stdio.h>

int main()
{	

	char letter[11] = {'a', 'A', 'e', 'E', 'i', 'I', 'u', 'U', 'o', 'O'};
	char let = 0;
	int counter = 0;	
	do{
	printf("Enter a letter:\t");
	scanf(" %c", &let);
        }
	while (let < 'A' || let > 'Z' && let < 'a' || let > 'z');
     	for (int j=0; j<10; ++j){
        	if (let == letter[j]){
		++counter;
		if (counter){
		printf("Your letter is vowel.\n");
		}
		else{
		printf("Your letter is not vowel.\n");
		}
		}
	}
	
}
*/
