/* Faça um programa que receba dois números. Calcule e mostre:
    - a soma dos números pares desse intervalo de números, incluindo os números digitados;
    - a multiplicação dos números ímpares desse intervalo, incluindo os digitados; */
#include <stdio.h>

int main(void){
    int x, y, i, soma[2], aux;
    printf("Digite os numeros X e Y: ");
    scanf("%i %i", &x, &y);
    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }
    soma[1] = 1;
    soma[0] = 0;
    for (x; x <= y; x++){
        if (x%2 == 0)
            soma[0] += x;
        else
            soma[1] *= x;
    }
    printf("Soma dos pares: %i\n", soma[0]);
    printf("Multiplicao dos impares: %i\n", soma[1]);




    return 0;
}
