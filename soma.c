#include "stdio.h"

int main(){
    int n1, n2, s;

    printf("Digite o primero numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    s = n1 + n2;

    printf("O resultado da soma e: %d", s);

    return 0;
}
