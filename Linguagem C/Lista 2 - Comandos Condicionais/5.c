/* Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou
�mpar. */
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
