#include "stdio.h"

int main(){

    int q;
    float p, vc, vd, vp, vpg;

    printf("Qual a quantidade? ");
    scanf("%d", &q);

    printf("Qual o preço do produto? ");
    scanf("%f", &p);

    vc = p * q;
    vd = vc * 0.05;
    vpg = vc - vd;

    printf("O valor total e: %2.f\n", vc);
    printf("O valor de desconto e: %2.f\n", vd);
    printf("O valor a pagar e: %2.f", vpg);




    return 0;
}
