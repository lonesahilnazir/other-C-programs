                                                            /**C program to print half pyramid of integers Type-2**/
#include<stdio.h>
main()
{
    int row,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    j=1;
    for(i=1;i<=row;++i)
    {
        for(k=1;k<=i;k++){
            printf("%2i ",j);
            j=j+1;

        }
        printf("\n");
    }
}
