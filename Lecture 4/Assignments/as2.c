#include <stdio.h>
int main(void){

    int i = 1;

    // while loop
    while (i < 10){
        printf("%d ", i);
        i++;
    }

    printf("\n");

    // for loop
    for (i = 1; i < 10;){
        printf("%d ", i);
        i++;
    }

    printf("\n");

    // do-while loop
    do{
        printf("%d ", i);
        i++;
    }while (i < 10);

    return 0;
}
