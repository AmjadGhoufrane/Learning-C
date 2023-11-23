#include <stdio.h>
#include <math.h>

int main()
{
    int nb1,nb2,nb3,resultat,x,y;

    printf("Entrez les valeurs de x et y : \n");
    scanf("%d%d",&x,&y);

    nb1 = 9*pow(x,4);
    nb2 = pow(y,4);
    nb3 = 2*pow(y,2);
    resultat = nb1 - nb2 + nb3;

    printf("Résultat : %d\n",resultat);

    return 0;

}