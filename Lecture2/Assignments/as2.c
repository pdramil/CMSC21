#include <stdio.h>

int main(void){
	int num, digit1, digit2, digit3, reverse;

	printf("Enter a 3-digit number : ");
	scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;

    reverse = 100 * digit3 + 10 * digit2 + digit1;

    printf("Reverse : %d\n",reverse);

    return 0;
}
