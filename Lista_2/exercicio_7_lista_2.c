/*Verifica se um caractece é maiusculo, minusculo ou outro*/

#include <stdio.h>

int main(void){
    char c;
    scanf("%c", &c);
    if(c >= 65 && c <= 90) printf("\nLetra maiuscula\n");
    else if(c >= 97 && c <= 122) printf("\nLetra minuscula\n");
    else printf("\nOutro caractere\n");
    return 0;
}
