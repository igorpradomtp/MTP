#include <stdio.h>
#include <math.h>
int main (){
    double lado1, lado2, lado3, angulo, radianos ;
    printf ("Informe os lados do triangulo:\n");
    printf("lado 1: ");
    scanf("%lf", &lado1);
    printf("lado 2: ");
    scanf("%lf", &lado2);
    printf ("Informe o angulo (em radianos):\n");
    scanf("%lf", &angulo);
    lado3= sqrt(pow(lado1, 2)+pow(lado2, 2)- 2*lado1*lado2*cos(angulo));
    printf("O terceiro lado e'= %lf", lado3);
return 0;
}
