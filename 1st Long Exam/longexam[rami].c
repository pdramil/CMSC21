#include <stdio.h>
#include <math.h>

int main(void){
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    double y = 1;           // initial guess
    double tol = 0.00001;   // decide accuracy level
    double n = x;           // assign the value of guess number to n

    // run through the loop until the square root is found
    while(fabs(n - y) > tol){
        y = x / n;
        n = (n + y) / 2;    // update the guess number
    }

    // print the square root of x
    printf("The square root of %d is %f.\n", x, n);

    return 0;
}

