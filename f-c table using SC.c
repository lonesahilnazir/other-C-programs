#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
    float c, f;
    for(f = LOWER; f <= UPPER; f += STEP)
    {
        c = ( 5 / 9. ) * ( f - 32 );
        printf("%5.0f\t\t",f);
        printf("%6.2f\n",c);
    }
}
