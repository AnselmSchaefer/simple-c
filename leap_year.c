/* leap_year.c */
#include <stdio.h>

main() {
    int year,month,days;
    printf("\n\tCalender\n");
    printf("\nPlease enter year:");
    scanf("%i",&year);
    printf("Please enter month:");
    scanf("%i",&month);
    if(month>=1 && month<=12 && year > 1582) {
        switch (month) {
            case 2:
                if (!((year%100)%4) && (year%100) || !(year%400))
                    days = 29;
                else
                    days = 28;
                break;
            case 2*2:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;
            default:
                days = 31;
        }
        printf("\nIn %i the month %i has %i days",year,month,days);
    }
    else
        printf("\nWrong dates!");
}