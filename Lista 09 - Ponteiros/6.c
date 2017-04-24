/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B. */
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
