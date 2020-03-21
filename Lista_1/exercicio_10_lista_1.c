#include<stdio.h>

int main(void){
    float pressao1, pressao2;
    printf("\nQual a pressao desejada?\n");
    scanf("%f", &pressao1);
    printf("\nPressao Lida\n");
    scanf("%f", &pressao2);
    printf("\nA diferenca de pressao e %2.f:\n", pressao1-pressao2);
    return 0;
}
