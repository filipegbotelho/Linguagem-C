/* Faça um programa que receba um número inteiro e verifique se este número é par ou
ímpar. */
#include <stdio.h>

int main(void){

    int numero;
    printf("%Digite um numero inteiro: ");
    scanf("%i", &numero);
    if  (numero%2 == 0)
        printf("Numero par!\n");
    else
        printf("Numero impar!\n");

    return 0;
}
