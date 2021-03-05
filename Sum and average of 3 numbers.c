                                    /**C program to calculate Sum and average of 3 numbers**/
#include<stdio.h>
main()
{
        float x,y,z;
        printf("Enter first no.: ");
        scanf("%f",&x);
        printf("Enter second no.: ");
        scanf("%f",&y);
        printf("Enter third no.: ");
        scanf("%f",&z);
        printf("    So their sum is %.2f\n",x+y+z);
        printf("   And their average is %.2f",(x+y+z)/3);
}
