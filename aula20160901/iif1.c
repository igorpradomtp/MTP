#include <stdio.h>
#include <float.h>
#include <time.h>
#include <stdlib.h> //RAND_MAX
int main (){
    srand (time(0));
    int i;
    if (1.0>1.0-DBL_EPSILON/4.0)
        printf("Maior\n");
    else
        printf("Igual?!?! delta= %le\n", DBL_EPSILON/4.0);
        for (i=0; i<10;i++);
            printf("%g\n", (float) rand ()/(float)RAND_MAX);
return 0;
}
