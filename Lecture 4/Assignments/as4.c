// program that calculates the power of two

#include <stdio.h>
int main(void){

    int exp, power = 1;

    printf("Base: 2\n");
    printf("Enter exponent: ");
    scanf("%d", &exp);

    while (exp != 0){
        power *= 2;       // power = power * 2
        exp--;
    }

    printf("Result: %d\n", power);

    return 0;
}
