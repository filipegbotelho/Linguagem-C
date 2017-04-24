/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */
#include <stdio.h>

int main(void){
    int x = 5;
    int y = 10;
    &x > &y ? printf("Conteudo do maior endereco: %i\n", x) : printf("Conteudo do maior endereco: %i\n", y);


    return 0;
}
