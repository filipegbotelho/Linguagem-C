/* Crie um programa que contenha uma fun��o que permita passar por par�metro dois
n�meros inteiros A e B. A fun��o dever� calcular a soma entre estes dois n�meros e
armazenar o resultado na vari�vel A. Esta fun��o n�ao dever� possuir retorno, mas dever�
modificar o valor do primeiro par�ametro. Imprima os valores de A e B na fun��o principal. */
#include <stdio.h>

void Soma(int *a, int *b){
    *a += *b;
}

int main(void){
    int a, b;
    printf("Digite os numeros A e B: ");
    scanf("%i %i", &a, &b);
    Soma(&a, &b);
    printf("A:%i\nB:%i\n", a, b);


    return 0;
}
