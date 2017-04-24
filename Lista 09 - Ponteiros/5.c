/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes
2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
segunda variável. Escreva o conteúdo das 2 variáveis na tela. */
#include <stdio.h>

void Troca(int *a, int *b){
    int aux;
    if (*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(void){
    int a, b;
    printf("Digite os valores A e B: ");
    scanf("%i %i", &a, &b);
    Troca(&a, &b);
    printf("Maior: %i\n", a);
    printf("Menor: %i\n", b);


    return 0;
}
