/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fa�a uma fun��o
que retorne a soma do dobro dos dois n�meros lidos. A fun��o dever� armazenar o dobro
de A na pr�pria vari�vel A e o dobro de B na pr�pria vari�vel B. */
#include <stdio.h>
int Dobro (int *a, int *b){
    *a *= 2;
    *b *= 2;
    return (*a + *b);
}

int main(void){
    int a, b, soma;
    printf("Digite os valores A e B: ");
    scanf("%i %i", &a, &b);
    soma = Dobro(&a, &b);
    printf("Dobro de A: %i\n", a);
    printf("Dobro de B: %i\n", b);
    printf("Soma do dobro de A e B: %i\n", soma);

    return 0;
}
