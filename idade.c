#include "stdio.h"

int main(){

    int an, aa, id;

    printf("Em que ano estamos? ");
    scanf("%d", &aa);

    printf("Qual seu ano de nascimento? ");
    scanf("%d", &an);

    id = aa - an;

    printf("Sua idade e: %d \n");

    if (id>=18){

       printf ("Voce e maior de idade");

    }
    else
    {
        printf("Voce e menor de idade");
    }
    return 0;
}
