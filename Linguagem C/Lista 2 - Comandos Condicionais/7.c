/* Fa�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois
n�meros forem iguais, imprima a mensagem "N�meros iguais". */
#include <stdio.h>

int main(void){

    int numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%i %i", &numero1, &numero2);
    if (numero1 > numero2)
        printf("Maior numero: %i\n", numero1);
    else if (numero1 < numero2)
        printf("Maior numero: %i\n", numero2);
    else
        printf("Numeros iguais\n");

    return 0;
}

