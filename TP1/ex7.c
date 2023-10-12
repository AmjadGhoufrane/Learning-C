#include <stdio.h>


int main()
{

    int sec,HH,mm,reste;

    printf("%s", "Entrez le nombre de secondes : ");

    scanf("%d",&sec);

    HH = sec / 3600;
    reste = sec%3600;
    mm = reste/60;
    reste = sec%60;

    printf("%02d Heures  %02d Minutes  %02d Secondes\n",HH,mm,reste);

    return 0;

}