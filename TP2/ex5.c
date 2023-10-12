#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d",&a);

    if (a>6)
    {
        printf("erreur\n");
        return 0;
    }

    switch( a )
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Semaine\n");
            break;
        case 5:
        case 6:
            printf("Weekend\n");
        
    }

    return 0 ;
}