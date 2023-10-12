# include <stdio.h>

int produit(int n,int b)
{
    if (b == 0) 
    {
        return 0 ;
    }
    else 
    {
        return n+produit(n,b-1);
    };
}

int main()

{

    int result;

    result = produit(7,4);

    printf("%d\n", result);

    return 0;

}

