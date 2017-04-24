/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos. */
#include <stdio.h>
int main(void){

    int vet[6], i;
    printf("Digite seis valores: ");
    for (i = 0; i < 6; i++)
        scanf("%i", &vet[i]);
    printf("Valores lidos:");
    for (i = 0; i < 6; i++)
        printf(" %i", vet[i]);
    return 0;
}
