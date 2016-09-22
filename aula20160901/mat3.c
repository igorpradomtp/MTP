#include <stdio.h>
#include <math.h>
int main (){
int numero, base;
double logar;
 printf("Digite um numero: \n");
 scanf("%d", &numero) ;
printf("Digite a base: \n");
 scanf("%d", &base);
 logar=(log(numero))/(log(base));
printf("%.1lf", logar);
return 0;
}

