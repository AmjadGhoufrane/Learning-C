#include <stdio.h>


int main()
{
    int a,b,c;

    printf("%s","Entrez vos trois variables : ");
    
    scanf("%d%d%d",&a,&b,&c);

    printf("Somme : %d , Moyenne : %d\n",a+b+c,(a+b+c)/3);

    int d,e,f;

    printf("%s","Entrez vos trois variables : ");
    
    scanf("%d%d%d",&d ,&e ,&f);

    printf("Somme : %d , Moyenne : %f\n", d+e+f , (d+e+f)/3. );



    return 0;
}