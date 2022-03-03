#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    //input first fraction from the user
    printf("Enter first fraction: ");           
    scanf("%d/%d", &num1, &denoml);
    
    //input second fraction from the user
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    //computes the value of the numerator
    result_num = numl * denom2 + num2 * denom1;

    //computes the value of the denominator
    result_denom = denoml * denom2;

    //printing the sum of the fractions
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}