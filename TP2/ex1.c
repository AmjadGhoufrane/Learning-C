#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    int n3;
    double m;
    
    scanf("%d%d%d",&n1 ,&n2 ,&n3);
 
    if (n1<=n2 && n1<=n3)
    {
        m = (n2+n3)/2;
    }
    else
    {
        if(n2<=n1 && n2<=n3)
        {
            m = (n1+n3)/2;
        }
        else
        {
            m = (n1+n2)/2;
        }
    }

    printf("La moyenne est %lf \n",m);
    
    return 0;
}