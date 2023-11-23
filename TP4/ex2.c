#include <stdio.h>
#define len 16


int count(char ch[len+1])
{
    int i=0;
    while(ch[i]!='\0')
    {
        i=i+1;
    }
    return i;
}


int main()
{
    char ch1[len+1]="Salut";
    char ch2[len+1]="Bruh";
    int lch1 = count(ch1);
    int lch2 = count(ch2);

    printf("Entrez votre chaine de charactères : ");
    scanf("%s",&ch2);
    printf("Chaine 1 : %s de taille %d\nChaine 2 : %s de taille %d\n",ch1,lch1,ch2,lch2);

    return 0;
}