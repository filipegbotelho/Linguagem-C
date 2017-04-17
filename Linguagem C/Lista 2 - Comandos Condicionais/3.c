/* Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o numero ao quadrado. */
#include <stdio.h>
#include <math.h>
int main(void){

    float numero, raiz, quad;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    raiz = sqrt(numero);
    quad = numero * numero;
    if (numero > 0)
        printf("Raiz quadrada: %.2f\n", raiz);
    else if (numero < 0)
        printf("Quadrado: %.2f\n", quad);

    return 0;
}

