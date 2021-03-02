                                /*program to count number of factors of an positive integer*/
#include<stdio.h>
main()
{
    int num,div,count=0;
    printf("enter a number: ");
    scanf("%i",&num);
    //logic for counting factors using for loop
    for(div=1;div<num;div++)
    {
        if(num%div==0)          //determining factors
        {
            count=count+1;      //counting factors
        }
    }
    //returning count of factors
    printf("\t %i has %i factors!",num,count);
}
