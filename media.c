#include "stdio.h"

int main()
{

    float n1,n2,m;

    printf ("Digite a primeira nota: ");
    scanf ("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf ("%f", &n2);

    m= (n1+n2)/2;

    printf ("Sua m�dia �: %.2f \n", m);

    if (m>=5){
        printf ("Parab�ns, voc� est� aprovado");
        }

    else if (m>=3 ){
            printf ("Voc� est� de recupera��o");
            }
        else{
            printf ("Voc� reprovou");
        }

        return 0;
    }
