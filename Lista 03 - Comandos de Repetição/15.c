/* Fa�a um programa que leia um n�mero inteiro positivo �mpar N e imprima todos os
n�meros �mpares de 1 at� N em ordem crescente. */
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
