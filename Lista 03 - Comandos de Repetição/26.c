/* Faça um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número
dado. */
#include <stdio.h>

int main(void){
    int i, n, flag;
    printf("Digite um numero: ");
    scanf("%i", &n);
    i = n;
    while (i++){
        if (i%11 == 0)
            break;
        if (i%13 == 0)
            break;
        if (i%17 == 0)
            break;
    }
    printf("Primeiro multiplo encontrado: %i", i);

    return 0;
}
