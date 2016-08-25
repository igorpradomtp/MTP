#include <stdio.h>
int main() {
      int numero, i;
    printf("informe um numero: ");
    scanf("%d" ,&numero);
    for(i=2; i< numero; i++) {
        if(numero%i == 0){
         printf("nao e primo");
           break;
        }
    }
    if( i == numero)
        printf("primo! \n");
     return 0 ;
}
