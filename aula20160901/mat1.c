#include <stdio.h>
#include <math.h>
int main (){
double x1, y1, x2, y2, distancia, x, y;
printf(" Digite as coordenadas do primeiro ponto: \n");
printf ("x: ");
scanf ("%lf", &x1);
printf ("y: ");
scanf ("%lf", &y1);
system ("cls");
printf(" Digite as coordenadas do segundo ponto: \n");
printf ("x: ");
scanf ("%lf", &x2);
printf ("y: ");
scanf ("%lf", &y2);
x= x2-x1;
y=y2-y1;
distancia= sqrt((pow(x,2))+pow(y,2));
printf("A distancia e' de: %lf ", distancia);
return 0;

}
