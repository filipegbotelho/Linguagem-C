/* Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra. */

#include <stdio.h>
int main(void){
    int i, vet[10], maior, pos;
    printf("Digite dez valores: ");
    maior = 0;
    for (i = 0; i < 10; i++){
        scanf("%i", &vet[i]);
        if (vet[i] > maior){
            maior = vet[i];
            pos = i+1;
        }
    }
    printf("Maior: %i\n", maior);
    printf("Posicao: %i\n", pos);


    return 0;
}
