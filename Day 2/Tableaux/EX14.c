#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T [10];
    int i ;
    float S , M ;
    for(i = 0 ; i<10 ; i++){
        printf("donner la note de l'etudiant num %d:", i+1);
        scanf("%f", &T[i]);
    }
    S = 0 ;
    for(i=0 ; i<10 ; i++)
       S = S + T[i];
       M = S / 10;
       printf("la moyenne des notes est : %.2f", M);
return 0;
}