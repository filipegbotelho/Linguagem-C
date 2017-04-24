/* Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>
int main(void){

    int vet[8], x, y, i;
    printf("Digite oito valores: ");
    for (i = 0; i < 8; i++)
        scanf("%i", &vet[i]);
    printf("Digite duas posicoes no vetor: ");
    scanf("%i %i", &x, &y);
    printf("Valores do vetor: \nX=%i \nY=%i\n", vet[x-1], vet[y-1]);


    return 0;
}
