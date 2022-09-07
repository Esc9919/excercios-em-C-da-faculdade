#include "stdio.h"

int main(){

    int c,f;

    printf("Qual a temperatura em graus C? ");
    scanf("%d", &c);

    f = (c*9/5) + 32;

    printf("A temperatura em fahrenheit e: %d", f);



    return 0;
}
