
#include <stdio.h>
int main() {
       float nota1, nota2, nota3,media;
   printf("informe a primeira nota: ");
   scanf("%f" ,&nota1);
   printf("informe a segunda nota: ");
   scanf("%f" ,&nota2);
   printf("informe a terceira nota: ");
   scanf("%f" ,&nota3);
   media = ((2*nota1)+(3*nota2)+(5*nota3))/10;
   printf("a media e: %.2f\n", media);
   return 0;
}
