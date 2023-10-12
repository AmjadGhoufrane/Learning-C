#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d",&a);

    if (1512<=a && a<=3999)
    {
        if ((a%4 == 0 && a%100!=0) || (a%400 == 0) )
        {
            printf("Bisextile\n");
        }
        else
        {
            printf("Non bisextile\n");
        }
    }
    else
    {
        printf("Ta mère\n");
    }

    return 0;
}