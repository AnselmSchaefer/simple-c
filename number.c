/* number.c */
#include <stdio.h>

main() {
    int x,y;
    printf("\n\t1 . Calculations\n");
    printf("\n Please enter an integer x:");
    scanf("%i",&x);
    printf("Please enter an integer y:");
    scanf("%i",&y);
    printf("\n %i + %i is %i",x,y,x+y);
    printf("\n %i - %i is %i",x,y,x-y);
    printf("\n %i * %i is %i",x,y,x*y);
    printf("\n %i / %i is %i",x,y,x/y);
    printf("\n %i %% %i is %i",x,y,x%y);
    
    printf("\n Please enter an float x:");
    scanf("%f",&x);
    printf("Please enter an float y:");
    scanf("%f",&y);
    printf("\n %f + %f is %f",x,y,x+y);
    printf("\n %f - %f is %f",x,y,x-y);
    printf("\n %f * %f is %f",x,y,x*y);
    printf("\n %f / %f is %f",x,y,x/y);
    printf("\n %f %% %f is %f",x,y,x%y);
}