/* Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do
teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o. */
#include <stdio.h>

int main(void){
    int x = 5;
    int y = 10;
    &x > &y ? printf("Conteudo do maior endereco: %i\n", x) : printf("Conteudo do maior endereco: %i\n", y);


    return 0;
}
