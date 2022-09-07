#include "stdio.h"

int main(){
    float r,d,c;

    printf("Digite o valor da cotacao: ");
    scanf ("%f", &c);
    printf ("Digite o seu valor em dolar: ");
    scanf ("%f", &d);

    r=d*c;

    printf ("O seu valor em real e: %2.f", r);
    return 0;
}
