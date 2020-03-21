/*Verifica se um eleitor é obrigado a votar ou não*/

#include<stdio.h>

int main(void){
    int idade;
    scanf("%d", &idade);
    if (idade <= 15) printf("\nNao eleitor\n");
    else if (idade >= 18 && idade <= 70) printf("\nEletor obrigatorio\n");
    else printf("\nEleitor facultativo\n");
    return 0;
}
