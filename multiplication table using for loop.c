                                                    /**C program to print multiplication table using for loop**/
#include <stdio.h>
main()
{
    int n,x=1;
    printf("enter a number ");
    scanf("%d",&n);
    for(int x=1;x<=10;x++)
    {
        printf("%d\n",x*n);
    }
}
