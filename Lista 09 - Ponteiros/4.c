/* Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas
2 vari�veis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas
vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B
ter� o valor de A. */
#include <stdio.h>
void Troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}

int main(void){
    int a, b;
    printf("Digite os valores A e B: ");
    scanf("%i %i", &a, &b);
    Troca(&a, &b);
    printf("A: %i\n", a);
    printf("B: %i\n", b);

    return 0;
}
