/* Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função n˜ao deverá possuir retorno, mas deverá
modificar o valor do primeiro par˜ametro. Imprima os valores de A e B na função principal. */
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
