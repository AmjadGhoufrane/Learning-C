#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int lentab = 20;   
    int tab[lentab];
    int pile[lentab];

    for(int i=0;i<lentab;i++)   // remplissage du tableau
    {
        tab[i] = rand()/100000000;
    };

    printf("%d",tab[0]);

    for(int i=1;i<lentab;i++)   // on print le tableau
    {
        printf(", %d",tab[i]);
    };

    printf("\n");

    for(int i=0;i<lentab;i++)   // remplissage de la pile
    {
        pile[i] = tab[i];
    };

    for(int i=0;i<lentab;i++)   // remplissage à l'envers 
    {
        tab[lentab-i-1] = pile[i] ;
    };

    printf("%d",tab[0]);

    for(int i=1;i<lentab;i++)   // on print le tableau
    {
        printf(", %d",tab[i]);
    };

    printf("\n");
    return 0;
}