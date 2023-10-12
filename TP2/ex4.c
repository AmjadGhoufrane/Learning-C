#include <stdio.h>

int fact(int n) // La frime personifiée
{
    if (n == 0) 
    {
        return 1 ;
    }
    else 
    {
        return n*fact(n-1);
    };
}

int main()

{

    int result;
    int n;

    scanf("%d",&n);
    
    if (n<0)
    {
        printf("Hors plage, vous avez saisi un nombre négatif !!! \n");
        return 0;
    }

    result = fact(n);

    printf("%d\n", result);

    return 0;

}
