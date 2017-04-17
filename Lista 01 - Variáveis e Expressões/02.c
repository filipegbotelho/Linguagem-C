/* Faça um programa que leia um número real e o imprima. */
#include <stdio.h>
int main(void){

    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("Numero digitado: %.2f\n", numero);

    return 0;
}
