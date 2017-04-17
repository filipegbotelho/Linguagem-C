/* Faça um programa que receba dois números e mostre qual deles é o maior. */
#include <stdio.h>

int main(void){

    int numero1, numero2;
    printf("Digite dois numeros: ");
    scanf("%i %i", &numero1, &numero2);
    if (numero1 > numero2)
        printf("Maior: %i\n", numero1);
    else if(numero1 < numero2)
        printf("Maior: %i\n", numero2);

    return 0;
}
