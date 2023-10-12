#include <stdio.h>

int main(void)
{
    int i;
    int e;

    i = 1;
    e=45;

    for (e = 45;e>=35;--e)
    {
        for (i = 1; i <= 10; ++i)
        {
            printf("%d x %d = %d \n",i,e,i*e);
        }
        printf("\n");
    }
    return 0;
}