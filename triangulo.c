#include "stdio.h"

int main(){

    float b,h,a;


    printf ("Qual a base do trinagulo? ");
    scanf ("%f", &b);

    printf ("Qual a altura do triangulo? ");
    scanf ("%f",&h);

    a = h*b/2;

    printf("A area do triangulo e: %2.f", a);

    return 0;
}
