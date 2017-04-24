/* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba o maior endereço. */
#include <stdio.h>

int main(void){
    int x;
    int y;
    &x > &y ? printf("Maior endereco: %i\n", &x) : printf("Maior endereco: %i\n", &y);



    return 0;
}
