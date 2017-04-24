/* Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os
números ímpares de 1 até N em ordem decrescente. */
#include <stdio.h>

int main(void){
    int i, n;
    printf("Digite um numero impar: ");
    scanf("%i", &n);
    printf("Numeros impares: ");
    for (i = 1; n >= i; n -= 2)
        printf("%i ", n);



    return 0;
}
