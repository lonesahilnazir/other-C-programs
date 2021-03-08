                                                            /**C program to print full pyramid of integers**/
#include<stdio.h>
main()
{
    int row,i,j,s;        //s is for spaces
    printf("Enter number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i=i+2)
    {
        for(s=row-i;s>=1;s=s-2)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
