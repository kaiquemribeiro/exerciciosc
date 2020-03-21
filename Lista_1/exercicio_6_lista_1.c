#include <stdio.h>

int main(void){
    float salario, adc1, adc2, adc3, adc4;
    printf("\nQual seu salario?\n");
    scanf("%f", &salario);
    printf("\nAdicional mes 1:\n");
    scanf("%f", &adc1);
    printf("\nAdicional mes 2:\n");
    scanf("%f", &adc2);
    printf("\nAdicional mes 3:\n");
    scanf("%f", &adc3);
    printf("\nAdicional mes 4:\n");
    scanf("%f", &adc4);

    printf("\nSeu salario e: %f\n", salario);
    printf("\nNo mes 1 voce recebeu %f adicionais\n", adc1);
    printf("\nNo mes 2 voce recebeu %f adicionais\n", adc2);
    printf("\nNo mes 3 voce recebeu %f adicionais\n", adc3);
    printf("\nNo mes 4 voce recebeu %f adicionais\n", adc4);
    printf("\nSua media de ganhos e: %2.f\n", (adc1+adc2+adc3+adc4) /4);
    
    return 0;
}
