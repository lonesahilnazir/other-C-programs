/**C program to print celsius-fahrenheit table**/
#include<stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;              //lower limit of table in celsius
    upper = 300;        //upper limit of table in celsius
    step = 20;          //size of step
    printf(" celsius  \t  fahr \n");
    fahr = lower;
    while(celsius <= upper)
    {
        fahr = ( (9.0 / 5.0) * celsius ) + 32.0;
        printf("%4.0f \t\t %5.1f \n", celsius, fahr);
        celsius = celsius + step;
    }
}
