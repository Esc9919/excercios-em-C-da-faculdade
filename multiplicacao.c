#include "stdio.h"

int main(){
    int n1, n2, m;

    printf("Digite o primero numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    m = n1 * n2;

    printf("O resultado da multiplicacao e: %d", m);

    return 0;
}
