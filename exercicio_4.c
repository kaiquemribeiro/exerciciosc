#include <stdio.h>

#define KILOMETROS 1.60934
#define METROS  0.3048
int main(void){
    float milhas, pes;
    printf("\nDigite o valor de milhas: \n");
    scanf("%f", &milhas);
    printf("\nDigite o valor de pes: \n");
    scanf("%f", &pes);

   milhas = (milhas * KILOMETROS);
   pes = (pes * METROS);
   printf("\nAs milhas em kilometros sao: %2.f\n", milhas);
   printf("\nOs pes em metros sao: %2.f\n", pes);

    return 0;
}
