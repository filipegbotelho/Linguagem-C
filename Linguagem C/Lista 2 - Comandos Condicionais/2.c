/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido. */
#include <stdio.h>
#include <math.h>
int main(void){

    int numero;
    float raiz;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    raiz = (float)sqrt(numero);
    if (numero > 0)
        printf("Raiz quadrada: %.2f", raiz);
    else if (numero < 0)
        printf("Numero invalido!\n");

    return 0;
}
