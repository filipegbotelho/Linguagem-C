/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa. */

#include <stdio.h>

int main(void){
    int i, vet[6];
    printf("Digite seis valores: ");
    for (i = 0; i < 6; i++)
        scanf("%i", &vet[i]);
    printf("Ordem inversa:");
    while(i--)
        printf(" %i", vet[i]);

    return 0;
}
