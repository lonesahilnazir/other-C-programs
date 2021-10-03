#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int primes[50] = {0};
    primes[0] = 2;
    primes[1] = 3;
    int index = 2;
    int i, j;
    bool isprime;
    for(i = 5; i <= 100; i+=2)
    {
        isprime = true;
        for(j = 1; i/primes[j]>=primes[j]; j++)
        {
            if(i % primes[j] == 0)
                isprime = false;
        }
        if(isprime)
        {
            primes[index] = i;
            ++index;
        }
    }
    for(j = 0; j < index; j++)
        printf("%d ", primes[j]);
    return 0;
}
