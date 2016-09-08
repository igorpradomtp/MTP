#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int main () {
        int i ;
    char frase[256];
     printf("digite uma frase: ");
    gets (frase);
    for(i =0; frase [i]; i++)
        frase[i] = toupper (frase[i]);
    printf("a frase tem %d caracteres . \n", strlen (frase));
    if (strncmp(frase,"BOM DIA",7)==0 )
        printf("BOM DIA PRA VOCE TAMBEM! \n");
    else
        printf("voce quer dizer %s?", frase);
     return 0;

    }
