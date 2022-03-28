#include <stdio.h>

int main(void){

	int age;

	printf("Enter an age: ");
	scanf("%d", &age);

	if (age >= 13 && age <= 19){
		printf("Teenager = True\n");
	}
	else{
		printf("Teenager = False\n");
	}

	return 0;
}
