/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado
- A raiz quadrada do número digitado */
#include <stdio.h>
#include <math.h>
int main(void){

    float numero, raiz, quad;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    raiz = sqrt(numero);
    quad = numero * numero;
    if (numero > 0){
        printf("Raiz Quadrada: %.2f\n", raiz);
        printf("Quadrado: %.2f\n", quad);
    }



    return 0;
}
