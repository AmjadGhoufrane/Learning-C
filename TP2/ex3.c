#include <stdio.h>

int main(void)
{
    int i;
    int e;

    i = 1;

    scanf("%d",&e);

    for (i = 1; i <= 10; ++i)
    {
        printf("%d x %d = %d \n",i,e,i*e);
    }
    
    return 0;
}