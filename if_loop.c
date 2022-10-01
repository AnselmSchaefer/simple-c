/* if_loop.c */
#include <stdio.h>

main() {
    //PART 1
    int x,y;
    printf("\n Comparing numbers \n");
    printf("\n Enter a number x: ");
    scanf("%i",&x);
    printf(" Enter a number y: ");
    scanf("%i",&y);
    // this synthax will check if x is larger than y, if yes x will be printed, otherwise y
    printf("\n The larger number is %i",(x>y) ? x : y); // the "?"" combination is called ternary operator

    //PART 2
    int choice;
    float amount;
    printf("\n\tEURO CALCULATOR\n");
    printf("\n1 DM --> EURO\n2 EURO --> DM");
    printf("\n\nIhre Wahl: ");
    scanf("%i",&choice);
    if(choice == 1) {
        printf("Please enter the amount in DM: ");
        scanf("%f",&amount);
        printf("\n%.2f DM are %.2f EUROs", amount, amount*0.51129);
    }
    if(choice == 2) {
        printf("Please enter the amount in Euros: ");
        scanf("%f",&amount);
        printf("\n%.2f EUROs are %.2f DM", amount, amount*1.95583);
    }
}