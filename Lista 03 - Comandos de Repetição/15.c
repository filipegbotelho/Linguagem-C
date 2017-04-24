/* Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os
números ímpares de 1 até N em ordem crescente. */
#include <stdio.h>

int main(void){
    int i, n;
    printf("Digite um numero impar: ");
    scanf("%i", &n);
    printf("Numeros impares: ");
    for (i = 1; i <= n; i += 2)
        printf("%i ", i);



    return 0;
}
