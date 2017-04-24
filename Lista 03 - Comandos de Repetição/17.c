/* Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais. */
#include <stdio.h>

int main(void){
    int n, soma, i;
    printf("Digite um numero natural: ");
    scanf("%i", &n);
    soma = 0;
    for (i = 1; i <= n; i++)
        soma += i;
    printf("Soma: %i\n", soma);


    return 0;
}
