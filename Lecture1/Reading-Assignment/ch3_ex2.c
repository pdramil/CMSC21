#include <stdio.h>

int main(void)
{
    int i;
    float x;

    //Constant values
    i = 40;             //value for i
    x = 839.21f;        //value for x

    //printing values in various format
    printf("|%d|%5d|%-5d|%5.3d\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
