/* Fa�a um programa que leia um n�mero inteiro positivo �mpar N e imprima todos os
n�meros �mpares de 1 at� N em ordem decrescente. */
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
