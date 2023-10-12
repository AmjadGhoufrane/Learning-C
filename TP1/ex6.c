#include <stdio.h>
#define TVA 0.2


int main()
{
    double p1,p2,p3;

    printf("%s","Entrez le prix hors taxe : ");

    scanf("%lf%lf%lf", &p1,&p2,&p3);

    printf("Voici les prix avec TVA : %.2lf  %.2lf  %.2lf\n",p1+p1*TVA,p2+p2*TVA,p3+p3*TVA);

    return 0;
}