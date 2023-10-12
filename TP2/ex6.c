#include <stdio.h>

int main(void) // Broken for now
{
    char num[][20]={"Zero","Un","Deux","Trois","Quatre","Cinq","Six","Sept","Huit","Neuf"};
    int e;

    scanf("Veuillez s'il vous plait, saisir un chiffre : %d \n",&e);

    if (e == '#')
    {
        printf("Fin du programme \n");
    }

    printf("%c",num[e]);

    return 0;
}