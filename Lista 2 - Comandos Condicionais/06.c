/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos. */
#include <stdio.h>

int main(void){

    int numero1, numero2;
    printf("Digite dois numero inteiros: ");
    scanf("%i %i", &numero1, &numero2);
    if (numero1 > numero2)
        printf("Maior numero: %i\nDiferenca: %i", numero1, numero1 - numero2);
    else if (numero2 < numero1)
        printf("Maior numero: %i\nDiferenca: %i", numero2, numero2 - numero1);


    return 0;
}

