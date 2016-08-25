#include <stdio.h>
 int main (){
   float lado1, lado2 , area;
   printf("informe o primeiro lado do triangulo: ");
   scanf("%f",&lado1);
   printf("informe o segundo lado do triangulo: ");
   scanf ("%f",&lado2);
     area = (lado1*lado2)/2;
     printf("A area do triangulo e: %.2f\n", area);
     return 0;
     }
