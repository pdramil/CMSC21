#include <stdio.h>
int main(void){

    int days, start_day, i, j;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    // checks whether the days entered are valid
    if (days == 28 || days == 30 || days == 31){
        printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &start_day);

        // prints the blank days of the first week
        for (i = 1; i < start_day; i++){
            printf("   ");
        }

        // prints the calendar numbers
        for (j = 1; j <= days; i++, j++){
            printf("%3d", j);
            if (i % 7 == 0){
                printf("\n");
            }
        }
    }
    else{
        printf("\nInvalid input. Enter only a valid number of days.\n");
    }

    return 0;
}

