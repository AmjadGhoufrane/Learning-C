#include <stdio.h>
#include "ex1.h"

void multi(int e)
{
    int i;

    i = 1;

    for (i = 1; i <= 10; ++i)
    {
        printf("e = %d -- i = %d\n",e,i);
        printf("%d x %d = %d \n",i,e,i*e);
    }
    printf("\n");
    return 0;
}