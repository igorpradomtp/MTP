#include <stdio.h>
#include <stdlib.h> // rand()
#include<time.h>
#include<string.h>
void roboEd ();
int main (){
   char frase_usuario[256];


   srand(time(0));
 printf("##tudo bem? quer conversar:\n");
   do {
    fgets(frase_usuario,sizeof(frase_usuario),stdin);
  roboEd();
   } while(strncmp(frase_usuario, "tchau",5)!= 0);
   printf("##tchau, ate mais:\n");



  return 0;
  }
  void roboEd (){
   switch (rand() % 10){
   case 0 : printf ("##tudo bem?\n"); break;
   case 1 : printf ("##ok \n"); break;
   case 2 : printf ("##lol\n"); break;
   case 3 : printf ("##que legal \n"); break;
   case 4 : printf ("##que chato\n"); break;
   case 5 : printf ("##fale mais sobre isso \n"); break;
   case 6 : printf ("##sobre o que quer falar \n"); break;
   case 7 : printf ("##descubra \n"); break;
   case 8 : printf ("##mim achar \n"); break;
   case 9 : printf ("##mudando de assunto voce ta tão bonito(A) \n"); break;

  }
  }
