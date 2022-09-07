#include "stdio.h"

int main(){

    float s,sf,r;

    printf("Digite o seu salario: ");
    scanf("%f", &s);

    r = s*0.10;

    sf= r+s;

    printf("O reajuste é: %2.f \n", r);
    printf ("O valor do salario e: %2.f \n", sf);

    return 0;
}
