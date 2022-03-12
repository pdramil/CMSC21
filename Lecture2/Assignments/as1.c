#include <stdio.h>

int main(void){
	int num, first_digit, last_digit;

	printf("Enter a 2-digit number : ");
	scanf("%d", &num);

    first_digit = num / 10;
    last_digit = num % 10;

    printf("Reverse : %d%d\n", last_digit, first_digit);

    return 0;
}
