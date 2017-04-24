/* Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido. */
#include <stdio.h>
void Dobro(int vet[]){
    int i;
    for (i = 0; i < 5; i++)
        vet[i] = vet[i] * 2;
}

int main(void){
    int i, vet[5];
    printf("Digite cinco valores: ");
    for (i = 0; i < 5; i++)
        scanf("%i", &vet[i]);
    Dobro(vet);
    printf("O dobro dos cinco valores: ");
    for (i = 0; i < 5; i++)
        printf("%i ", vet[i]);

    return 0;
}
