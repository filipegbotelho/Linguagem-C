/* Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores
X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa
dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y. */

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
