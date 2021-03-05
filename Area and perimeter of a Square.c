                                    /** C program to calculate area and perimeter of a square**/
#include<stdio.h>
main()
{
    float side;
    printf("Side = ");
    scanf("%f",&side);
    printf("Area = %.2f\n",side*side);
    printf("Perimeter = %.2f",4*side);
}
