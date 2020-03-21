/* Calcula f(x)*/
#include <stdio.h>

int main(void){
    float numero, aux;
    scanf("%f", &numero);
    if (numero <= 0){
        aux = numero + 3;
        printf("\n%2.f", numero);
        printf("\n%2.f", aux);
    }else{
        aux = pow(numero,2);
        aux = numero + 2*numero;
        printf("\n%2.f", numero);
        printf("\n%2.f", aux);
    }
    
    return 0;
}
