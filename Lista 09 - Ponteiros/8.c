/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array. */
#include <stdio.h>

int main(void){
    int i;
    float vet[10];
    for (i = 0; i < 10; i++)
        printf("Endereco %i: %i\n", i+1, &vet[i]);

    return 0;
}
