#include "rationnel.h"
#include <stdio.h>

void afficher(const rationnel* r)
{
    printf("%d/%d\n", r->denominateur, r->numerateur);
}

void saisir(rationnel* r)
{
    char c;
    printf("Saisir une fraction sous la forme \"numerateur/denominateur\":");
    scanf("%d %c%d",&(r->numerateur),&c,&(r->denominateur));
    if(c!='/')
        printf("Le separateur %c n'est pas le bon!\n",c);
}