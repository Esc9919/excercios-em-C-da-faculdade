#include "stdio.h"

int main(){

    int X,Y,C;


    printf("Digite X: ");
    scanf("%d", &X);

    printf("Digite Y: ");
    scanf ("%d", &Y);

    C = Y;
    Y = X;
    X = C;

    printf ("Valor de X: %d\n", X);
    printf ("Valor de Y: %d", Y);

    return 0;
}
