                                            /**C program to check evenness of an integer**/
#include <stdio.h>
int main()
{
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n%2 == 0)
    printf("\t%i is Even\n",n);
  else
    printf("\t%i is Odd\n",n);
}
