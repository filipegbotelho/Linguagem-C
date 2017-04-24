/* Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares. */
#include <stdio.h>

int main(void){
    int vet[5], i;
    for (i = 0; i < 5; i++)
        scanf("%i", &vet[i]);
    for (i = 0; i < 5; i++){
        if (vet[i]%2 == 0)
            printf("Valor:%i \tEndereco: %i\n", vet[i], &vet[i]);
    }



    return 0;
}
