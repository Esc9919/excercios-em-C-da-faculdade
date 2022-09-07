#include "stdio.h"

int main(){

    int x,y;


    printf("Digite X: ");
    scanf("%d", &x);

    printf("Digite Y: ");
    scanf ("%d", &y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf ("Valor de X: %d\n", x);
    printf ("Valor de Y: %d", y);

    return 0;
}
