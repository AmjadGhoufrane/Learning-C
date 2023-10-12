#include <stdio.h>

int main()

{
    char nb1;
    char nb2;
    char nbt;

    nb1 = 'a', nb2 = 'b';
    
    nbt = nb1;
    nb1 = nb2;
    nb2 = nbt;

    printf("Avant échange : nb1 = %c, nb2 = %c\n", nb1, nb2);

    return 0 ;

}