#include <stdio.h>
#include <ctype.h>
int main (){
    char frase[256];
    char olheiro;
    int indice=0;
    int cont=0;
    printf("Digite uma frase: ");
    gets(frase);
    olheiro= frase[indice];
    while (olheiro!='\0')
    {
        if (olheiro!=' ')
            cont++;
        indice++;
        olheiro=frase[indice];
    }
    printf("O numero de letras e': %d\n", cont);
    return 0;
}
