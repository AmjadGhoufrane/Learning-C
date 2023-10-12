#include <stdio.h> /* pour printf et scanf */


int main(void) 
{
    double somme=0.0, note;
    int cpt=0;
    double max=0;
    double mini = 0;

    do

        {
            printf("Donner une note (nombre négatif pour terminer) :");
            scanf("%lf", &note);

            somme += note;

            if (note > max)
                max = note;
            else
                if(note>=0)
                    mini = note;
            
            cpt++;
        }

    while(note >= 0.0) ;

    somme -= note; if(cpt > 1) cpt--;

    printf("La moyenne des notes est %f et la meilleure note est %f et la pire note est %f\n", somme/cpt,max,mini);

    return 0;
}
