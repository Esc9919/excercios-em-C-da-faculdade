#include "stdio.h"

int main()
{

    float n1,n2,m;

    printf ("Digite a primeira nota: ");
    scanf ("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf ("%f", &n2);

    m= (n1+n2)/2;

    printf ("Sua média é: %.2f \n", m);

    if (m>=5){
        printf ("Parabéns, você está aprovado");
        }

    else if (m>=3 ){
            printf ("Você está de recuperação");
            }
        else{
            printf ("Você reprovou");
        }

        return 0;
    }
