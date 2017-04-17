/* Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem "Números iguais". */
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

