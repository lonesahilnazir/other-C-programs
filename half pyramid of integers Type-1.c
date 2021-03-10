                                                            /**C program to print half pyramid of integers Type-1**/
#include<stdio.h>
main()
{
    int row,i,j;        //i represents i'th row,  j represents no. of integers in i'th row
    printf("Enter number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;++i)
    {
        for(j=1;j<=i;j++)
        {
            printf("%i ",j);
        }
        printf("\n");
    }
}
