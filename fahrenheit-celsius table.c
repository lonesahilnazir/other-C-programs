/**C program to print fahrenheit-celsius table**/
#include<stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;              //lower limit of table in fahrenheit
    upper = 300;        //upper limit of table in fahrenheit
    step = 20;          //size of step
    printf(" fahr \t celsius \n");
    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%4.0f \t %5.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}

        /*this program is taken from 'C programming language' by "Kernighan & Ritchie"
        **I just changed it to print a heading above the table as a exercise (1-3)**/
