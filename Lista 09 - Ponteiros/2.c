/* Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e
exiba o maior endere�o. */
#include <stdio.h>

int main(void){
    int x;
    int y;
    &x > &y ? printf("Maior endereco: %i\n", &x) : printf("Maior endereco: %i\n", &y);



    return 0;
}
