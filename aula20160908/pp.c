#include <stdio.h>
#include <stdlib.h>
 int main() {
     int vetor [] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
     int contagem = 0;
//int tam = sizeof(vetor)/ sizeof(int);
 unsigned int *p = NULL, *q; //inicializar ponteiros
 p = q= (unsigned int *)  vetor;
 for(; p < q + sizeof(vetor); p++) {
 if (*p == 0x0x0x0)contagem++;
    printf("%p :%X\n", p, *p);
 }
 printf("bytes apenas com 1's: %d\n", contagem );


 return 0;


 }
