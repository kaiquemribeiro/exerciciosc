#include<stdio.h>
#define ENVER 1.6

int main(void){
    float altura, envergaduras, total;
    int testegit;
    printf("\nQual a altura?\n");
    scanf("%f", &altura);
    printf("\nQuantas envergaduras?\n");
    scanf("%f", &envergaduras);

    altura = altura * ENVER;
    total = envergaduras * altura;
    total = total * 3;
    printf("\nA area do terreno e: %2.f\n", total);
    
    return 0;
}
