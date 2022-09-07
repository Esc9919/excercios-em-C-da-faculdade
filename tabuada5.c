#include "stdio.h"

int main(){

    int n1,x,res;
    printf ("Digite o numero que voce quer da tabuada: ");
    scanf("%d", &n1);
    printf("\n");
    for(x=1;x<=10; x++){
      res=n1*x;
      printf ("%d x %d = %d \n", n1,x, res);

    }
 return 0;
}
