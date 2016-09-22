#include <stdio.h>
#include <ctype.h>
int main (){
    char FRASE[256];
    char olheiro;
    int indice=0;
    printf("Digite uma FRASE: ");
    gets(FRASE);
    olheiro = FRASE[indice];
    while (olheiro!='\0')
    {
        FRASE[indice]=toupper(olheiro);
        indice++;
        olheiro=FRASE[indice];
    }
    printf("%s \n", FRASE);
    return 0;
}

